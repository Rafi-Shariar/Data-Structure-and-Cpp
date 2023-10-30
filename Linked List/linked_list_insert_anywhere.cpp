#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node * next;

};

class LinkedList{
    public:
    
    int sz=0;
    node* head;
   

    LinkedList(){
        head = NULL;
    }

    node * CreatNewNode(int value){

        node* newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        sz++;

        return newnode; 
    }


    void InserAtHead(int value){

        node * a = CreatNewNode(value);

        if (head==NULL)
        {
            head = a;
            return ;
        }

        a->next=head;
        head=a;
        
    }

    void Travast(){
        node* a = head;

        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a= a->next;
        }

        cout<<"\n";
        
        
    }

    void insertAtAnyPosition(int index, int value ){
           if (index< 0 || index>sz)
           {
             return;
           }
           
           if (index==0)
           {
             InserAtHead(value);
             return;
           }
          
          node *a = head;
          int curr_index =0;

          while (curr_index!=index-1)
          {
            a = a->next;
            curr_index++;
          }

          node* newnode = CreatNewNode(value);

          newnode->next= a->next;
          a->next = newnode;
         
          
           

    }

    int getsize(){

        return sz;
    }


    void deletHead(){
        if (head==NULL)
        {
            return;
        }

        node * a = head;
        head = a->next;

        delete a;
        sz--;
        
    }

    void deletAnyIndex(int index){

        if (index<0 || index>sz-1)
        {
            return;
        }
        

        if (index==0)
        {
            deletHead();
        }

        node * a= head;
        int cur_index=0;
        while (cur_index!=index-1)
        {
            a=a->next;
            cur_index++;
        }

        node*b=a->next;
        a->next=b->next;

        delete b;
        sz--;
        
        

    }

};
int main(){

    LinkedList l;

    l.InserAtHead(10);
    l.InserAtHead(20);
    l.InserAtHead(40);
    l.InserAtHead(50);
   cout<< l.getsize() <<endl;

   

    l.Travast();

    l.insertAtAnyPosition(2,100);

    l.Travast();
    cout<< l.getsize() <<endl;

    l.deletHead();
    l.Travast();
    cout<< l.getsize() <<endl;

    l.deletAnyIndex(3);
    l.Travast();
    


    return 0;
}