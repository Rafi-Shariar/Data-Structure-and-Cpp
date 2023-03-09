#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * nxt;
    node * prv;
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


    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }


    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }


   
    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }


    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }
 //swap values


    void swap(int index1, int index2){


        node*a=head;
        node*b=head;


        int pos1=0,pos2=0;


        while (pos1!=index1)
        {
            a=a->nxt;
            pos1++;
        }


        while (pos2!=index2)
        {
            b=b->nxt;
            pos2++;
        }


        int temp;
        temp=a->data;
        a->data=b->data;
        b->data=temp;
         


    }


    //delete nodes containing Zeros


    void deleteZero(){
    node* a = head;
    while (a != NULL) {
        if (a->data == 0) {
            node* b = a->prv;
            node* c = a->nxt;


            if (b != NULL) {
                b->nxt = c;
            }
            if (c != NULL) {
                c->prv = b;
            }
            if (a == head) {
                head = c;
            }
            delete a;
            sz--;
        }
        a = a->nxt;
    }




}






};


int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(7);
    dl.InsertAtHead(4);
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);


    dl.Traverse();


    dl.swap(1,4);
    dl.Traverse();


    printf("\n");


    DoublyLinkedList dl2;
    dl2.InsertAtHead(5);
    dl2.InsertAtHead(0);
    dl2.InsertAtHead(0);
    dl2.InsertAtHead(2);
    dl2.InsertAtHead(0);
    dl2.Traverse();


    dl2.deleteZero();
    dl2.Traverse();
    // i have implemented the deleteZero function but for some reason (which i couldn't find out) the traverse function is not working 




    return 0;


}
