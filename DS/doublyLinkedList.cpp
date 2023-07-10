#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    node *CreateNewNode(int data)
    {
        node *newNode = new node;
        newNode->data = data;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }
    void InsertAtHead(int data)
    {
        sz++;
        node *newNode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        // if not null , then already has a node before
        node *a = head; // reserving head node as a node;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
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
    void getSize()
    {
        cout << sz << endl;
    }

    void InsertAtAnyIndex(int index, int value)
    {
        if (index == 0)
        {
            InsertAtHead(value);
            return;
        }
        node *a = head;
        int curr_index = 0;
        while (curr_index != index - 1)
        {
            a = a->nxt;
            curr_index++;
        }
        node *newNode = CreateNewNode(value);
        newNode->nxt = a->nxt;
        newNode->prv = a;
        node *b = a->nxt;
        b->prv = newNode;
        a->nxt = newNode;
        sz++;
    }

    void Delete(int index)
    {
        if (index == 0)
        {
            return;
        }
        int current_idx = 0;
        node *a = head;
        while (current_idx != index)
        {
            a = a->nxt;
            current_idx++;
        }
        node *b = a->nxt;
        b->prv = a->prv;
        node *prvNode = a->prv;
        prvNode->nxt = a->nxt;
        delete a;
    }
    void Reverse()
    {
        node *a = head;
        while (a->nxt != NULL)
        {
            a = a->nxt;
        }
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->prv;
        }
        cout << "\n";
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(55);
    dl.InsertAtHead(20);
    dl.Traverse();
    dl.getSize();
    dl.InsertAtAnyIndex(1, 22);
    dl.InsertAtHead(49);
    dl.Traverse();
    dl.Reverse();
    dl.getSize();
    dl.Delete(1);
    dl.getSize();
    dl.Traverse();
    dl.Delete(2);
    dl.Traverse();
    dl.Reverse();
    return 0;
}