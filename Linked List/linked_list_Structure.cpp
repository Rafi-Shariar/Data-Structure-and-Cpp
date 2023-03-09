#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * next; //pointer ta next element er adress rakhbe tai node pointer

};

class LinkedList{
    public:

    node * head; // 1st node tar track rakhtesi, head 1st node er add rakhe

    LinkedList(){ // constractor
        head = NULL; //initially head null e point kora
    }

    node * CreatNewNode(int value){  // new node bananor jonno ekta function likhlam

        node* newnode = new node;  //aita new node er address rakhbe
        newnode->data = value;  // value ta hobe new node er data
        newnode->next = NULL;  // next hoye jabe NULL

        return newnode;
    }

   void InsertAthead(int value){

    node* a = CreatNewNode(value);

    if (head == NULL) // linklist faka hole
    {
        head = a;  // head k bollam new node "a" te point korro
        return ;
    }

    a->next=head;
    head = a;
    

   }

   void Travast(){

    node * a = head; // head ekta adress store koretse tai node pointer newa
    while (a!=NULL)
    {
        cout<<a->data<<" ";
        a = a->next; // next er adress ta a te set koralm
    }
    

   }

int SearchDistinctValue(int value){

    node* a = head;
    int index=0;
    while (a!=NULL)
    {
        if (a->data==value)
        {
            return index;
        }

        a = a->next;
        index++;
        
    }

    return -1;
    

   }

   void SearchAllValue(int value){

    node* a = head;
    int index=0;
    while (a!=NULL)
    {
        if (a->data==value)
        {
            cout<<"value is found at "<<index<<endl;
        }
        index++;
        a = a->next;
        
    }
    

   }

};

int main(){

    LinkedList l;

    l.InsertAthead(10);
    l.InsertAthead(30);
    l.InsertAthead(20);
    l.InsertAthead(30);

    l.Travast();

    cout<<l.SearchDistinctValue(10)<<endl;

    cout<<l.SearchDistinctValue(5)<<endl;

    l.SearchAllValue(30);



    return 0;
}