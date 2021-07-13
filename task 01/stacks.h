#ifndef STACKS_H_INCLUDED
#define STACKS_H_INCLUDED

const int MAX = 5;

template<class T>
class Stacks
{
private:
    int top;
    T arr[MAX];
    T aux[MAX];
public:
    Stacks();
    bool isFull();
    bool isEmpty();
    void makeEmpty();
    void push(T);
    void pop();
    T peek();
    void print(T);
};

//Exception Classes
class FullStack
{

};
class EmptyStack
{

};
#endif // STACKS_H_INCLUDED
