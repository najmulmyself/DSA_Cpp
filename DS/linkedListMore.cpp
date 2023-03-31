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
        int sz;

        LinkedList()
        {
            head = NULL;
            sz = 0;
        }

        node *CreateNewNode(int value)
        {
            sz++; // for tracking size/length of the linked list;
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
            cout<<"\n";
        }

        void getSize(){
            cout<<sz<<endl;
        }

        void insertAtAnyIndex(int index,int value){
            node * a = head; // starting from head;
            int curr_index = 0;
            if(index ==0){
                InsertAtHead(value);
                return;
            }
            while (curr_index != index-1)// we need to find previous node of the node we want to add;
            {
                a = a->nxt; // if its not the previous node then go to the next node;
                curr_index++;
            }
            sz++; // maintaining size
            node * newNode = CreateNewNode(value); // init new node
            newNode->nxt = a->nxt; // if we find previous node, need to set previous node's nxt to new node;
            a->nxt = newNode; // and new node to previous
            
        }
    };

int main()
{
    LinkedList l;

    l.InsertAtHead(10);
    l.Traverse();
    l.getSize();
    l.InsertAtHead(2);
    l.Traverse();
    l.getSize();

    l.insertAtAnyIndex(1,50);
    l.Traverse();
    l.insertAtAnyIndex(0,22);
    l.insertAtAnyIndex(1,60);
    l.Traverse();
    l.getSize();
    return 0;
}