#include <iostream>
#include <string.h>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

int main()
{
    int flag=0;
    char input[101];
    stacktype<char> st;

    cin>>input;

    for(int i=0; input[i]; i++){
        if(input[i]=='('){
            if(st.IsFull()){
                cout<<"Not Balanced\n";
                return 0;
            }
            st.Push(input[i]);
        }
        else{
            if(st.IsEmpty()){
                cout<<"Not Balanced\n";
                return 0;
            }
            st.Pop();
        }
    }

    if(st.IsEmpty())
        cout<<"Balanced\n";
    else
        cout<<"Not Balanced\n";

    return 0;
}
