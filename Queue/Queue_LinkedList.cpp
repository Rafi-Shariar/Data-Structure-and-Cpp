#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

};

class Queue{
    public:

    node * head;
    node * tail; 
    int sz;

    Queue(){

        head=NULL;
        tail=NULL;
        sz=0;
    }

    node* CreatNode( int value){

        node* newnode = new node;
        newnode->data = value;
        newnode->next = NULL;

        return newnode;
    }

    void enqueue(int value){

        sz++;

        node* newnode = CreatNode(value);

        if (head==NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next= newnode;
        tail = newnode; 

    }

    void dequeue(){

        if (sz==0)
        {
            return;
        }

        if (sz==1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node * a = head;
        head = head->next;
        sz--;
        delete a; 
        
    }

    int front(){

        if (sz==0)
        {
            return 0;
        }

        return head->data;
        
    }

    int size(){

        return sz;
    }





};
int main(){

    Queue q;

    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);

    cout<<q.size()<<endl;

    cout<<q.front()<<endl;

    q.dequeue();

    cout<<q.front()<<endl;

    return 0;
}