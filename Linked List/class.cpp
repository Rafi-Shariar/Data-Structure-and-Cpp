#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class node{
    public:
    int data;
    node * next;
};

class LinkedList{
    public:

    node * head;
    LinkedList(){
        head = NULL;
    }

    int size = 0;

    node * CreatenewNode(int value){

         node * a = new node;
         a->data = value;
         a->next = NULL;
         size++;

         return a;
    }

    void insertbeging(int value){

        node * a = CreatenewNode(value);

        if(head == NULL){
            head = a;
            return;
        }

        a->next = head;
        head = a;
    }

    void travers(){
        node * a = head;

        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
        
    }

    void insertEND(int value){
        node *a = CreatenewNode(value);

        node * tmp = head;

        while (tmp->next!=NULL)
        {
            tmp =tmp->next;
        }

        tmp->next = a;

         
    }

    int sz(){
        return size;
    }

    void search2(int value){
        node * a = head;

        while(a!=NULL){

            if(a->data == value){
                cout<<value<<" Data Found"<<endl;
                return;
            }
            a= a->next;
        }

        cout<<value<<" Not found"<<endl;
    }


    void delete_element(int value){
        node * a = head;

        while (a->next->data != value)
        {
            a = a->next;
        }

        node*b=a->next;
        a->next=b->next;

        delete b;
        size--;
        
    }

};


int main(){

    LinkedList l;
    l.insertbeging(50);
    l.insertbeging(40);
    l.insertbeging(30);
    l.insertbeging(20);
    l.insertbeging(10);
    l.insertEND(60);

    l.travers();
    cout<<endl;
    
    cout<<"size of linked list : "<<l.sz()<<endl<<endl;

    int a; cin>>a;
    l.search2(a);
    cout<<endl;

    int b; cin>>b;

    l.delete_element(b);

    cout<<"after deleting 30"<<endl<<endl;

    l.travers();
    cout<<endl;

    cout<<"current size after delete : "<<l.sz()<<endl;


    return 0;
}