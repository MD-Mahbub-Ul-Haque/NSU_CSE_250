#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    int numberOfElements;
    node *head,*tail;
public:
    linked_list()
    {
        numberOfElements = 0;
        head = NULL;
        tail = NULL;
    }

    void add_node(int n){
        numberOfElements++;
        node *temp = new node;

        temp->data = n;
        temp->next = NULL;

        if(head==NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    }

    node* gethead()
    {
        return head;
    }

    int get_numberOfElements(){
        return numberOfElements;
    }


    static void display(node *head)
    {
        if(head != NULL){
            cout<<head->data<<endl;
            display(head->next);
        }
    }
};

int main()
{
    int data;

    linked_list a;

    while(cin>>data){
        a.add_node(data);
    }

    cout<<a.get_numberOfElements()<<endl;
}
