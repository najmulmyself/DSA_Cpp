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

    // Creates a new node with the given data and returns it O(1)
    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    // Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    // Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if (index > sz)
        {
            return;
        }
        if (index == 0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    // Deletes the given index O(n)
    void Delete(int index)
    {
        if (index >= sz)
        {
            cout << index << " doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if (b != NULL)
        {
            b->nxt = c;
        }
        if (c != NULL)
        {
            c->prv = b;
        }
        delete a;
        if (index == 0)
        {
            head = c;
        }
        sz--;
    }

    // Prints the linked list O(n)
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

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    // Reverse the doubly linked list O(n)
    void Reverse()
    {
        if (head == NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while (cur_index != sz - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        // last index is in a

        node *b = head;
        while (b != NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }

 void deleteZero()
    {

        
        node *a = head;
        while (a->data != 0)
        {
            a = a->nxt;
        }
        node *prvNode = a->prv;
        node *nxtNode = a->nxt;

        if (prvNode != NULL)
        {
            prvNode->nxt = nxtNode;
        }
        else
        {// if first item contains 0
            head = nxtNode;
            delete a;

            node *a = head;
        }

        if (nxtNode != NULL)
        {
            nxtNode->prv = prvNode;
        }else{ // if last item contains 0
            delete a;
            return;
        }

        delete a;

        if (nxtNode->nxt != NULL)
        {
            deleteZero();
        }
    }
    // changed function name because  previously used this name
    void swapIndex(int i, int j)
    {

        if (i == j) {
            return; // No need to swap elements at the same index
        }
        node * iNode = head;
        int currentIndex = 0;
        while (currentIndex != i && iNode != NULL)
        {
            iNode = iNode->nxt;
            currentIndex++;
        }
        node * jNode = head;
        
        currentIndex = 0;
        while (currentIndex != j && jNode != NULL)
        {
            jNode = jNode->nxt;
            currentIndex++;
        }
        int tempData = iNode->data;
        iNode->data = jNode->data;
        jNode->data = tempData;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(0);
    dl.InsertAtHead(2);
    dl.InsertAtHead(6);
    dl.InsertAtHead(0);
    dl.InsertAtHead(7);

    dl.Traverse();
    // dl.Insert(2, 100);

    dl.Traverse();

    dl.Reverse();
    dl.Traverse();
    dl.deleteZero();
    dl.Traverse();
    dl.swapIndex(1,4);
    dl.Traverse();

    return 0;
}