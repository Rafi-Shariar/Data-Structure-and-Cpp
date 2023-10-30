#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class node{
    public:

    int data;
    node * next;

};

class Linklist{
    public:

    node * head;

    Linklist(){
    head = NULL;
    }

    node * CreatenewNode(int value){

        node * a = new node;
        a->data = value;
        a->next = NULL;
        return a;
    }


    void insertAt_begin(int value){

        node * a = CreatenewNode(value);

        if(head == NULL){
            head = a;
            return;
        }

        a->next = head;
        head = a; 
    }

    void print(){
        node* a = head;

        while (a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
        
    }

    void insertEND(int value){

        node*a = CreatenewNode(value);

        node * tmp = head;

        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }

        tmp->next = a;
        a->next = NULL;
        
    }

    void insert(int value,int pos){

        node* a = CreatenewNode(value);
        int cur = 1;

        node * tmp = head;

        while (cur < pos-1)
        {
            tmp = tmp->next;
            cur++;
        }

        a->next = tmp->next;
        tmp->next = a;


    }


    void find(int value){

        node * a = head;

        while (a!=NULL)
        {
            if(a->data==value){
                cout<<"Value found"<<endl;
                return;
            }
            a = a->next;
        }

        cout<<"NOT FOUND"<<endl;
        return;
        
    }

};
int main(){

    Linklist l;
    l.insertAt_begin(5);
    l.insertAt_begin(6);
    l.insertAt_begin(7);
    l.insertAt_begin(3);
    l.insertEND(99);

    l.print();

    l.find(100);
    

    return 0;
}