#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * nxt;
};

class LinkedList{
    public:
    node * head;

    LinkedList(){
        head = NULL;
    }

    node * CreateNewNode(int value){
        node * newNode = new node;

        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }
    void InsertAtHead(int value){
        node* a = CreateNewNode(value);
        if(head == NULL){
            head  = a;
            return;
        }

        // if head is not null, that means head points already a node;
        // then: we need to point next node as previously pointed head;
        // then points head as newly added node which is a;
        a->nxt = head;
        head = a;
    }

    void Traverse(){
        // let's refer something/node as head
        node * a = head;
        while (a !=NULL)
        // then we must go to the loop for checking if a.nxt hasn't null yet
        {
            cout<<a->data<< " ";
            // need to change data for traversing more item;
            a = a->nxt;            
        }
        cout<<"\n";
        
    }
};



int main(){

    LinkedList l;

    l.InsertAtHead(10);
    l.Traverse();
    l.InsertAtHead(6);
    l.Traverse();
    l.InsertAtHead(50);
    l.Traverse();
    l.InsertAtHead(66);
    l.Traverse();
    l.InsertAtHead(12);
    l.Traverse();

return 0;
}