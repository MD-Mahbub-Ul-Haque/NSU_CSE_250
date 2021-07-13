#include "stacks.h"
#include <iostream>

using namespace std;

    //Constructor
    template<class T>
    Stacks<T>::Stacks()
    {
        top = -1;
    }

    //Transformers
    template<class T>
    void Stacks<T>::makeEmpty()
    {
        top = -1;
    }
    template<class T>
    void Stacks<T>::push(T val)
    {
        try
        {
            if(isFull()) throw FullStack();
            else
            {
                top++;
                arr[top] = val;
            }
        } catch (FullStack)
        {
            cout << "Stack is Overflow!\n";
            return;
        }

    }
    template<class T>
    void Stacks<T>::pop()
    {
        try
        {
            if(isEmpty()) throw EmptyStack();
            else top--;
        } catch (EmptyStack)
        {
            cout << "Stack is Underflow!\n";
            return;
        }
    }

    //Observers
    template<class T>
    bool Stacks<T>::isEmpty()
    {
        return (top == -1);
    }
    template<class T>
    bool Stacks<T>::isFull()
    {
        return (top == MAX - 1);
    }
    template<class T>
    T Stacks<T>::peek()
    {
        try
        {
            if(isEmpty()) throw EmptyStack();
            else return arr[top];
        } catch (EmptyStack)
        {
            cout << "Stack is Underflow!\n";
            return 0;
        }
    }

    //Iterators
    template<class T>
    void Stacks<T>::print(T n)
    {
        for(int i = 0; i < n; i++)
        {
            if(isEmpty()) break;
            else
            {
                aux[i] = arr[i];
                pop();
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(isFull()) break;
            else
            {
                push(aux[i]);
                cout << aux[i] << " ";
            }
        }
        cout << "\n";
    }
