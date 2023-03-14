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
    int getSize(){

    }
    int getValue(int v){

    }
    void printReverse(){

    }
    void swapFirst(){

    }

};
int main(){

    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

return 0;
}