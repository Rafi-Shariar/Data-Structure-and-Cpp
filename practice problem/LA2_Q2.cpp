#include<bits/stdc++.h>
using namespace std;

template<class T>
class node{
    public:
    T data;
    node * next;
};
template<class T>
class Singly_Linked_List{
    public:
    node<T> * head;
    int sz;

    Singly_Linked_List(){
        head = NULL;
        sz=0;
    }

    node<T>* Creat_NewNode(T val){

        node<T>*a = new node<T>;
        a->data= val;
        a->next=NULL;
        sz++;

        return a;
    }

    void InsertAtHead(T val){
        node<T>* a = Creat_NewNode(val);

        if (head == NULL)
        {
            head = a;
            return;
        }

        node<T>* x = head;

       a->next = x;
       head = a;
        
    }

    void DeleteHead(){

        if (head== NULL)
        {
            return;
        }

        node<T> * a = head;
        node<T> * b = head->next;

        head=b;
        delete a;
        sz--;
         
    }

    int getsize(){

        return sz;
    }

};
template<class T>
class Stack{
    public:
    Singly_Linked_List<T> s;

    Stack(){

    }

    void push(T value){

        s.InsertAtHead(value);
    }

    void pop(){

        s.DeleteHead(); 
    }

    T top(){
        if (s.getsize()==0)
        {
            return -1;
        }

        return s.head->data;
        
    }


};
int main(){

    Stack<int> s;

    s.push(10);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<"Top : "<<s.top()<<endl;

    s.pop();
    cout<<"after pop , top : "<<s.top()<<endl;

    s.pop();
    cout<<"after 2nd pop, Top : "<<s.top()<<endl;


    return 0;
}