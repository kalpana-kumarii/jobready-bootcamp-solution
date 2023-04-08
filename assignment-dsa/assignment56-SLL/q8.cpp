// 8. Create a Stack using a singly linked list.
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *next;

    node()
    {
        value = 0;
        next = NULL;
    }
};
class SLL
{
public:
    node *head;
    SLL()
    {
        head = NULL;
    }

    void push(int value)
    {
        node *temp = new node();
        temp->value = value;

        if (head == nullptr)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            while (t->next != nullptr)
            {
                t = t->next;
            }
            t->next = temp;
        }
    }

    void pop()
    {
        node *t = head;
        while (t->next->next != NULL)
        {
            t = t->next;
        }
        node *temp = t->next;
        t->next = NULL;
        cout << temp->value << " deleted" << endl;
        delete temp;
    }

    void top()
    {
        node *t = head;

        while (t->next != NULL)
        {
            t = t->next;
        }
        cout << "Top value " << t->value << endl;
    }
    void printLL()
    {
        node *t = head;
        while (t != nullptr)
        {
            cout << t->value << "->";
            t = t->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    SLL l;

    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);
    l.push(5);
    l.printLL();
    l.top();
    l.pop();
    l.pop();
    l.top();
    // l.printLL();
    // l.printLL();
}