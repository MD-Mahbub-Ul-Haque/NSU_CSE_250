#include <iostream>
#include <bits/stdc++.h>
#include "stacks.cpp"

using namespace std;



void firstTask()
{

    Stacks<int> st;


    if(st.isEmpty()) cout << "Stack is Empty\n";
    else cout << "Stack is not Empty\n";


    st.push(5);
    st.push(7);
    st.push(4);
    st.push(2);


    if(st.isEmpty()) cout << "Stack is Empty\n";
    else cout << "Stack is not Empty\n";

    if(st.isFull()) cout << "Stack is Full\n";
    else cout << "Stack is not Full\n";


    cout << "The values in stack : ";
    st.print(4);

    st.push(3);

    cout << "The values in stack : ";
    st.print(5);


    if(st.isFull()) cout << "Stack is Full\n";
    else cout << "Stack is not Full\n";


    st.pop();
    st.pop();


    cout << "The value in top : ";
    cout << st.peek() << "\n";
}

int main()
{
    cout << "Task 01 \n\n";
    firstTask();


    return 0;
}
