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


};
int main(){

    Doubly_Linked_List l;
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(10);

    l.Travast();
    cout<<l.getsize()<<endl;

    return 0;
}