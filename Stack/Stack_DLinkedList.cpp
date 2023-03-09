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

    void deleteAtHead(){
        
        if (head==NULL)
        {
            return;
        }

        node * a = head;
        node * b = head->next;

        delete a;

        if (b!=NULL)
        {
            b->previous=NULL;
        }

        head=b;
        sz--;
        
        
    }

    // in Linked List Class
    int index_val(int index){

        node*a=head;
        int cur_ind=0;

        while (cur_ind!=index)
        {
            a = a->next;
            cur_ind++;
        }

        return a->data;
        

    }


};

class Stack{
    public:
    Doubly_Linked_List dl;

    Stack(){

    }

    int top(){
        if (dl.getsize()==0)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        return dl.head->data;
        
    }

    void push(int val){

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

    // In Stack Class

    int indexValue(int index){

        if (index>dl.sz)
        {
            return -1;
        }

        return dl.index_val(index);
          
    }

};
int main(){

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;


    cout<<st.indexValue(5);
    

    
 

    return 0;
}