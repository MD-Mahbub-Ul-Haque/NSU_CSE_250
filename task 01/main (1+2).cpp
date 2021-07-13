#include <iostream>
#include <bits/stdc++.h>
#include "stacks.cpp"

using namespace std;

void isBalanced(string s)
{
    Stacks<char> st;
    int n = s.length();
    char arr[n + 1];
    strcpy(arr, s.c_str());

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == '(') st.push(arr[i]);
        else if(arr[i] == ')') st.pop();
    }
    if(st.isEmpty()) cout << "Balanced!\n";
    else cout << "Not balanced!\n";
}

void firstTask()
{
    //(1) Creating the stack
    Stacks<int> st;

    //(2) Checking if it's Empty
    if(st.isEmpty()) cout << "Stack is Empty\n";
    else cout << "Stack is not Empty\n";

    //(3) Adding 4 items
    st.push(5);
    st.push(7);
    st.push(4);
    st.push(2);

    //(4) Checking if it's Empty
    if(st.isEmpty()) cout << "Stack is Empty\n";
    else cout << "Stack is not Empty\n";

    //(5) Checking if it's Full
    if(st.isFull()) cout << "Stack is Full\n";
    else cout << "Stack is not Full\n";

    //(6) Printing in order
    cout << "The values in stack : ";
    st.print(4);

    //(7) Adding another item
    st.push(3);

    //(8) Printing in order
    cout << "The values in stack : ";
    st.print(5);

    //(9) Checking if it's Full
    if(st.isFull()) cout << "Stack is Full\n";
    else cout << "Stack is not Full\n";

    //(10) Popping two items
    st.pop();
    st.pop();

    //(11) Printing the Top
    cout << "The value in top : ";
    cout << st.peek() << "\n";
}

int main()
{
    cout << "Here starts the first task: \n\n";
    firstTask();

    cout << "\n\nHere starts the second task: \n\n";
    //Checking balance for each input
    isBalanced("()");
    isBalanced("()(())()(()())()");
    isBalanced("(())()((()");
    isBalanced("(())))((()");
    return 0;
}
