#include <iostream>
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

    void add_node (int n)
    {
        node *tmp = new node;

        tmp->data = n;

        tmp->next = NULL;

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
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
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->next->data <<endl;
            display (head->next);
        }
    }

};

int main()
{
    linked_list obj1;

    obj1.add_node(1);
    obj1.add_node(2);
    obj1.add_node(3);
    obj1.add_node(4);

    linked_list::display(obj1.gethead());

    return 0;

}
