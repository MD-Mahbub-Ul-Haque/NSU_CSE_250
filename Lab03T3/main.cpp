#include <iostream>
using namespace std;

 int x = 0;
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

    void add_node (int n)
    {

        node *tmp = new node;

        tmp->data = n;

        tmp->next = NULL;

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
            x++;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
            x++;
        }
    }
    node* gethead()
    {
        return head;
    }
    static void display (node *head)
    {
        if (head == NULL)
        {
            cout<< "NULL" << endl;
        }
        else
        {
            cout << x << endl;

        }
    }

    static void diff(node *h){
        if(h==NULL || h->next == NULL)
            cout<<"Nothing to print"<<endl;
        else{
            node *temp = h;
            while(temp->next != NULL){
                int num = temp->data - (temp->next)->data;
                temp = temp ->next;
                cout<<abs(num)<<" ";
            }
        }


    }
};

int main()
{
    int n;
    linked_list l;

    while(cin>>n){
        l.add_node(n);
    }

    linked_list::diff(l.gethead());

    return 0;

}
