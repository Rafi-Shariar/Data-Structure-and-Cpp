#include<bits/stdc++.h>
using namespace std;
template <class T>
class node{
    public:
    T data;
    node * prv;
    node * nxt;
    
};

template<class T>
class Deque{
    public:
    node<T> * head;
    node<T> * tail;
    int sz;

    Deque(){
        head = NULL;
        tail = NULL;
        sz=0;
    }

    node<T> * CreatNewNode(T val){
        node<T> * a = new node<T>;
        a->data = val;
        a->nxt = NULL;
        a->prv = NULL;

        return a;
    }

    void push_front(T val){
         
         node<T> * a = CreatNewNode(val);
        if (sz==0)
        {
            head = a;
            tail = a;
            sz++;
            return ;
        }

        head->prv = a;
        a->nxt = head;
        head = a;
        sz++;
        
    }

    void push_back(T val){

        node<T> * a = CreatNewNode(val);

        if (sz==0)
        {
            head= a;
            tail = a;
            sz++;
            return;
        }

        tail->nxt = a;
        a->prv = tail;
        tail = a;
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

        node<T> * a = tail;
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


        node<T>* a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
        
        
    }

    T Front(){
        if (sz==0)
        {
            return-1;
        }

        return head->data;
    }

    T Back(){
        if (sz==0)
        {
            return -1;
        }

        return tail->data;
        
    }

};

int main(){

    Deque<int> d;

    d.push_back(20);
    d.push_back(30);
    d.push_front(10);
    d.push_back(40);
    d.push_back(50);
    d.push_back(60);

    cout<<"Top : "<<d.Front()<<endl;
    cout<<"Back : "<<d.Back()<<endl;

    d.pop_back();
    cout<<"after popback, current back : "<<d.Back()<<endl;

    d.pop_front();
    cout<<"after popfront, current front : "<<d.Front()<<endl;


    return 0;
}