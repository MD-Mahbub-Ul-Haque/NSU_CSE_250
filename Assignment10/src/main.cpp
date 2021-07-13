#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int> tree;

    if(tree.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;

    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    if(tree.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;

    cout<<tree.LengthIs()<<endl;

    int n = 9;
    bool found = false;
    tree.RetrieveItem(n, found);
    if(found)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    n = 13;
    found = false;
    tree.RetrieveItem(n, found);
    if(found)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    tree.ResetTree(IN_ORDER);
    found = false;
    while(!found){
        tree.GetNextItem(n, IN_ORDER, found);
        cout<<n<<" ";
    }

    cout<<endl;

    tree.ResetTree(PRE_ORDER);
    found = false;
    while(!found){
        tree.GetNextItem(n, PRE_ORDER, found);
        cout<<n<<" ";
    }

    cout<<endl;

    tree.ResetTree(POST_ORDER);
    found = false;
    while(!found){
        tree.GetNextItem(n, POST_ORDER, found);
        cout<<n<<" ";
    }

    tree.MakeEmpty();

    return 0;
}
