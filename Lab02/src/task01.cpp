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
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n){
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


    static void display(node *head)
    {
        if(head != NULL){
            cout<<head->data<<endl;
            display(head->next);
        }
    }


    static void display_except_first(node *hd){
        if(hd==NULL || hd->next == NULL)
            cout<<"Nothing to print"<<endl;
        else{
            node *temp = hd->next;
            while(temp->next != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<temp->data;
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

    linked_list::display_except_first(a.gethead());

    return 0;
}
