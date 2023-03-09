#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node * prv;
    Node* nxt;
    int data;
};
class Deque{
    public:
    Node* head;
    Node* tail;
    int sz;

    Deque(){
        head = NULL;
        tail = NULL;
        sz=0;
    }

    Node * CreateNewNode(int value){

        Node* a = new Node;
        a->nxt= NULL;
        a->prv = NULL;
        a->data= value;

        return a;
    }

    void PushBack(int val){

        Node* a = CreateNewNode(val);
        
        if (sz==0)
        {
            head = a;
            tail = a;
            sz++;
            return;
        }

        tail->nxt=a;
        a->prv=tail;
        tail = a;
        sz++;
        return;
        

    }

    void PushFront(int val){
        
        Node*a= CreateNewNode(val);

        if (sz==0)
        {
            head = a;
            tail = a;
            sz++;
            return ;
        }

        head->prv=a;
        a->nxt=head;
        head = a;
        sz++;
        
    }


    void PopBack(){
        if (sz==0)
        {
            return ;
        }

        if (sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        Node*a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt= NULL;
        sz--;
        
        
    }

    void PopFront(){
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

        Node * a= head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
        
        
    }
 

 // will return the max value of the deque
    int max(){

        if (sz==0)
        {
            return -1;
        }

        if (sz==1)
        {
            return head->data;
        }
        
        
        Node * a = head;

        int m = head->data;

        while (a!=NULL)
        {
            if (m<(a->data))
            {
                m=a->data;
            }
            a=a->nxt;
            
        }

        return m;
        
    }


    // will return the min value of the deque

    int min(){

        if (sz==0)
        {
            return -1;
        }

        if (sz==1)
        {
           return head->data;
        }
        
        Node * a = head;
        int m=head->data;

        while (a!=NULL)
        {
            if (m>a->data)
            {
                m=a->data;
            }

            a=a->nxt;
            
        }

        return m;
        
        
    }

};
int main(){


    Deque d;
    d.PushBack(10);
    d.PushBack(30);
    d.PushBack(34);
    d.PushBack(47);
    d.PushBack(62);
    d.PushBack(88);
    d.PushBack(23);
    d.PushBack(3);

    


    cout<<"max : "<<d.max()<<endl;
    cout<<"Min : "<<d.min()<<endl;



    return 0;
}