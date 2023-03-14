#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
};

class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        head = NULL;
    }

    node *CreateNewNode(int value)
    {
        node *newNode = new node;

        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }

        a->nxt = head;
        head = a;
    }
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
    int getSize()
    {
        int count = 0;
        node *a = head;
        while (a != NULL)
        {
            count++;
            a = a->nxt;
        }
        return count;
    }
    int getValue(int v)
    {
        int count = 0;
        node *a = head;
        while (a != NULL)
        {
            if (count == v)
            {
                return a->data;
            }
            count++;
            a = a->nxt;
        }
        return -1;
    }

    node *a = head;
    void printReverse()
    {
        // if (a == NULL)
        // {
        //     return;
        // }
        //     a = a->nxt;
        //     cout << a->data << " ";
        //     printReverse();
    }
    void swapFirst()
    {
        node *a = head;
        node *first = a;
        node *second = a->nxt;

        int temp = first->data;
        first->data = second->data;
        second->data = temp;

        // Traverse();
    }
};
int main()
{

    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";

    cout << l.getValue(6) << "\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}