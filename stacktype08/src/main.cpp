#include <iostream>
#include <iomanip>
#include "stacktype.cpp"

using namespace std;

bool Operator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return 1;
    else
        return 0;
}

int prefarance(char ope){
    int val = 0;

    if(ope == '+' || ope == '-')
        val = 1;
    if (ope == '*' || ope == '/')
        val = 2;

    return val;
}

bool check_prefarance(char op1, char op2){
    int r = prefarance(op1);
    int q = prefarance(op2);

    if(r>q || r==q)
        return 1;
    else
        return 0;
}

string convert(string infix){
    StackType <char> S;
    string postfix ="";
    char ch;

    S.Push('(');
    infix += ')';

    for(int i = 0; i<infix.length(); i++){
        ch = infix[i];

        if(ch == '(')
            S.Push(ch);
        else if(isdigit(infix[i])){
            postfix += ch;
            int j=i;
            if(j < infix.length()){
                if(!isdigit(infix[j+1]))
                    postfix += " ";
            }
        }
        else if(Operator(ch)){
            while(!S.IsEmpty() && check_prefarance(S.Top(), ch)){
                postfix += S.Top();
                S.Pop();
            }
            S.Push(ch);
            postfix += " ";
        }
        else if(ch == ')'){
            while(!S.IsEmpty() && S.Top() != '('){
                postfix += S.Top();
                S.Pop();
            }
            S.Pop();
        }
    }

    return postfix;
}

int main()
{

    string str, str1;
    double ans;

    cin>>str;

    str1 = convert(str);

    StackType <double> st;

    for(int i=0; i<str1.length(); i++){
        double m;

        if(str1[i]==' ')
            continue;
        else if(isdigit(str1[i])){
            m = (str1[i++]-'0');
            st.Push(m);
        }
        else if(Operator(str1[i])){
            int a = st.Top();
            st.Pop();

            int b = st.Top();
            st.Pop();

            char ch = str1[i];
            double n;

            if(ch=='+')
                n = a+b;
            else if(ch=='-')
                n = b-a;
            else if(ch=='*')
                n = a*b*1;
            else if(ch=='/')
                n = b/a*1;

            st.Push(n);
        }
    }

    ans = st.Top();
    st.Pop();

    if(st.IsEmpty())
        cout<<setprecision(2)<<ans<<endl;
    else
        cout<<"Invalid Expression"<<endl;

    return 0;
}
