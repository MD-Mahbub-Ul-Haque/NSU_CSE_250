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


    static void key_differences(node *hd){
        if(hd==NULL || hd->next == NULL)
            cout<<"Nothing to print"<<endl;
        else{
            node *temp = hd;
            while(temp->next != NULL){
                int num = temp->data - (temp->next)->data;
                temp = temp->next;
                cout<<abs(num)<<" ";
            }
        }
    }
};

int main()
{
    int data;
    linked_list myList;

    while(cin>>data){
        myList.add_node(data);
    }

    linked_list::key_differences(myList.gethead());

    return 0;
}
