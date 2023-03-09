#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

class Linked_List{
    public:

    node* head;

    Linked_List(){
        head = NULL;
    }

  node* CreatnewNode(int value){

    node* a = new node;
    a->data = value;
    a->next = NULL;

    return a;
  }

  void inserAtHead(int value){

    node* a =CreatnewNode(value);

    if (head==NULL)
    {
        head = a;
        return;
    }

    a->next=head;
    head = a;
    

  }

  void travast(){

    node* a = head;

    while (a!=NULL)
    {
        cout<<a->data<<" ";
        a=a->next;
    }

    cout<<"\n";
    
  }

  void reversePrint2(node* a){

    if (a==NULL)
    {
        return;
    }

    reversePrint2(a->next);
    cout<<a->data<<" ";
    
  }

  void reversePrint(){

    reversePrint2(head);

  }
};
int main(){

    Linked_List l;

    l.inserAtHead(30);
    l.inserAtHead(20);
    l.inserAtHead(10);

    l.travast(); 
    
    
    l.reversePrint();


    return 0;
}