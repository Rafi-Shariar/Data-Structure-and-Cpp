#include<bits/stdc++.h>
using namespace std;

template<class T>
class node{
    public:
    T data;
    node* next;
    node* previous;
};

template <class T>
class Doubly_Linked_List{
    public:
    node<T>* head;
    int sz;

    Doubly_Linked_List(){

        head= NULL;
        sz = 0;

    }

    node<T>* CreatNewNode(T value){

        node<T>* a = new node<T>;
        a->data=value;
        a->next=NULL;
        a->previous=NULL;
        sz++;

        return a;
    }


    void InsertAtHead(T value){

        node<T> * a = CreatNewNode(value);

        if (head ==NULL)
        {
            head = a;
            return;
        }
          
          node<T>* x= head;
        a->next=x;
        a->previous=a;
        head=a;
        
        

    }

    void DeleteAtHead(){

        if (head==NULL)
        {
            return;
        }

        node<T>*a = head;
        node<T>*b= head->next;
        delete a;

        if (b!=NULL)
        {
            b->previous=NULL;
        }

        head=b;
        sz--;
        
        
    }

  

    int getsize(){

        return sz;
    }

    void deleteAtHead(){
        
        if (head==NULL)
        {
            return;
        }

        node<T> * a = head;
        node<T> * b = head->next;

        delete a;

        if (b!=NULL)
        {
            b->previous=NULL;
        }

        head=b;
        sz--;
        
        
    }



};
template<class T>
class Stack{
    public:
    Doubly_Linked_List<T> dl;

    Stack(){

    }

    T top(){
        if (dl.getsize()==0)
        {
            cout<<"Stack is empty"<<endl;
            T a;
            return a;
        }

        return dl.head->data;
        
    }

    void push(T val){

        dl.InsertAtHead(val);
    }

    void pop(){
          if (dl.getsize()==0)
        {
            cout<<"Stack is empty"<<endl;
            return ;
        }

        dl.deleteAtHead();
    }


};
int main(){

    Stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

   cout<<st.top()<<endl;

    
 

    return 0;
}