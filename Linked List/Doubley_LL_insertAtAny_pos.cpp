#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* previous;
};

class Doubly_Linked_List{
    public:
    node* head;
    int sz;

    Doubly_Linked_List(){

        head= NULL;
        sz = 0;

    }

    node* CreatNewNode(int value){

        node* a = new node;
        a->data=value;
        a->next=NULL;
        a->previous=NULL;
        sz++;

        return a;
    }


    void InsertAtHead(int value){

        node * a = CreatNewNode(value);

        if (head ==NULL)
        {
            head = a;
            return;
        }
          
          node* x= head;
        a->next=x;
        a->previous=a;
        head=a;
        
        

    }

    //insert any possition
    void insertAnyPosition(int index, int data){

        if (index>sz)
        {
            return;
        }
        

        if (index==0)
        {
            InsertAtHead(data); 
        }

        node* a = head;
        int cur_idx=0;

        while (cur_idx!=index-1)
        {
            a =a->next;
            cur_idx++; 
        }

        node * newnode = CreatNewNode(data);
        newnode->next=a->next;
        newnode->previous=a;

        node*b = a->next;
        b->previous = newnode;
        a->next=newnode;
        sz++;
         
        
        
    }

    void Travast(){
        node*a=head;

        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }

        cout<<"\n";
        
    }

    int getsize(){

        return sz;
    }

   //delet a node
    void delet(int index){

        if (index>sz)
        {
           return;
        }
        
        
        node* a = head;
        int cur_idx=0;

        while (cur_idx!=index)
        {
            a=a->next;
            cur_idx++;
        }

        node * b  = a->previous;
        node* c = a->next;
        if (b!=NULL)
        {
            b->next = c;
        }
        if (c!=NULL)
        {
            c->previous=b;
        }

        delete a;

        if (index==0)
        {
            head = c;
        }

        sz--;
         
        
    }

// void reverse
    void reverse(){

        if (head==NULL)
        {
            return;
        }
        
        node* a = head;
        int cur_idx=0;
        while (cur_idx!=sz-1)
        {
            a=a->next;
            cur_idx++;
        }

        node * b = head;
        while (b!=NULL)
        {
            swap(b->next,b->previous);
            b=b->previous;
        }

        head = a;
        
        
    }


};
int main(){

    Doubly_Linked_List l;
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(10);

    l.Travast();
    cout<<l.getsize()<<endl;

    l.insertAnyPosition(2,999);
    l.Travast();

    l.delet(2);
    l.Travast();

    l.Travast();

    l.reverse();
    l.Travast();

    return 0;
}