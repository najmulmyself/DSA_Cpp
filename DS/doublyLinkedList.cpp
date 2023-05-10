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
        node *a = head; // reserving head node as a node;
        newNode->nxt = a;
        a->prv = newNode;
        head  = newNode;
        
    }

    void Traverse(){
        node *a = head;

        while(a != NULL){
            cout<<a->data<< " ";
           a =  a->nxt;
        }
        cout<<"\n";
    }
    int getSize(){
        return sz;
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
    return 0;
}