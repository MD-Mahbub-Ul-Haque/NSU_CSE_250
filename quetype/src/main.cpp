#include <iostream>
#include "quetype.cpp"

using namespace std;

void print(QueType <int> q);

void print(QueType <int> q){
    int temp;
    while(!q.IsEmpty()){
        q.Dequeue(temp);
        cout<<temp<<" ";
    }

}

int main()
{
    int n;
    QueType <int> q(5);
    cout<<(q.IsEmpty()? "Queue is Empty" : "Queue is not empty")<<endl;

    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);

    cout<<(q.IsEmpty() ? "Queue is Empty" : "Queue is not empty" )<<endl;
    cout<<(q.IsFull() ? "Queue is Full" : "Queue is not Full")<<endl;

    q.Enqueue(6);

    print(q);

    cout<<endl<<(q.IsFull()? "Queue is Full" : "Queue is not Full")<<endl;

    try{
        q.Enqueue(8);
    }catch(FullQueue fl){
        cout<<"Queue Overflow"<<endl;
    }

    q.Dequeue(n);
    q.Dequeue(n);

    print(q);

    cout<<endl<<(q.IsEmpty() ? "Queue is Empty" : "Queue is not empty")<<endl;

    q.Dequeue(n);
    q.Dequeue(n);
    q.Dequeue(n);

    try{
        q.Dequeue(n);
    }catch(EmptyQueue fl){
        cout<<"Queue Underflow"<<endl;
    }

    return 0;
}


