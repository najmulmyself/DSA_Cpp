#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* nxt;

    class LinkedList{
        public:
        node * head;
        int sz;

        LinkedList(){
            head = NULL;
            sz = 0;
        }

        node * CreateNewNode(int value){
            sz++; // for tracking size/length of the linked list;
            node * newNode = new node;
            newNode->data = value;
            newNode->nxt = NULL;
            return newNode;


        }

        void InsertAtHead(int value){

        }

        
    };

};

int main(){
    return 0 ;
}