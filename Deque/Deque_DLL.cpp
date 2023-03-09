#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    node * prv;
    node * nxt;
    int data;
    
};

class Deque{
    public:
    node * head;
    node * tail;
    int sz;

    Deque(){
        head = NULL;
        tail = NULL;
        sz=0;
    }

    node * CreateNewNode(int value){
        node * a = new node;
        a->nxt = NULL;
        a->prv = NULL;
        a->data = value;

        return a;
    }

    void pushback(int val){
        node * a = CreateNewNode(val);
        if (sz==0)
        {
            head = a;
            tail = a;
            sz++;
            return;
        }

        tail->nxt = a;
        a->prv = tail;
        tail = a;
        return;
  
    }

    void push_front(int val){

        node * a = CreateNewNode(val);

        if (sz==0)
        {
            head = a;
            tail = a;
            sz++;
            return;
        }
        
        head->prv = a;
        a->nxt = head;
        head = a;
        sz++;
    }

    void pop_back(){

        if (sz==0)
        {
            return;
        }

        if (sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node * a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
         
    } 


    void pop_front(){

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
        
        head = head->nxt;

        delete a;
        head->prv= NULL;
        sz--;

        
        
    }

    int front(){
        if (sz==0)
        {
            return -1;
        }

        return head->data;
        
    }

    int back(){
        if (sz==0)
        {
            return -1;
        }

        return tail->data;
        
    }







};
int main(){

    Deque d;

  d.pushback(5);
  d.pushback(34);
  d.pushback(56);

  cout<<" Back : "<<d.back()<<endl;



    return 0;
}