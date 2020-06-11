

#include <iostream>

using namespace std;


template<typename T>
class linked_list
{
    public:
    struct node
    {
        T data;
        node* next;
    };
    node* head, * tail;

    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(T n)
    {
        node* tmp = new node;
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
    void display()
    {
        node* tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data->name << endl;
            tmp = tmp->next;
        }
    }
};
struct employee
{
    char name;
    int num;
};
int main()
{
    employee* e3 = new employee;
    e3->name = 'f';
    e3->num = 1;
    employee* e4 = new employee;
    e4->name = 'c';
    e4->num = 5;

    linked_list<employee*> b;
    b.add_node(e3);
    b.add_node(e4);

    
    b.display();
    return 0;
}

