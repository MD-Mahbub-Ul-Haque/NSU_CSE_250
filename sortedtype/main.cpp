#include <iostream>
#include "src\sortedtype.cpp"
using namespace std;


void printList(SortedType<int> s){
    int item;
    for(int i=0; i<s.LengthIs(); i++){
        s.GetNextItem(item);
        cout<<item<<" ";
    }
}

int main()
{
    SortedType <int> s;
	bool a;
    int item;

    cout<<s.LengthIs()<<endl;


    s.InsertItem(5);
    s.InsertItem(7);
    s.InsertItem(4);
    s.InsertItem(2);
    s.InsertItem(1);


    cout<<"The elements are:"<<endl;
    printList(s);




	item = 6;
    s.RetrieveItem(item, a);
    cout<<endl<<(a?"Item is found":"Item is not found")<<endl;

    item = 5;
    s.RetrieveItem(item, a);
    cout<<(a?"Item is found":"Item is not found")<<endl;


    cout<<(s.IsFull()?"List is full":"List is not full")<<endl;

    s.DeleteItem(1);


    cout<<"The array elements now:"<<endl;
    printList(s);


    cout<<endl<<(s.IsFull()?"List is full":"List is not full")<<endl;

    return 0;
}
