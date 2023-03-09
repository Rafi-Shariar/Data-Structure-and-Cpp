#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node * Left;
    node * Right;

};

class BST{
    public:

    node * root;

    BST(){
        root=NULL;
    }

    node* CreateNewNode(int val){

        node * newnode = new node;

        newnode->value=val;
        newnode->Left=NULL;
        newnode->Right=NULL;
        return newnode;
    }

    void BFS(){

        if (root==NULL)
        {
            return;
        }
        
        queue<node*>q;

        q.push(root);

        while (!q.empty())
        {
         node * a = q.front();
         q.pop();

         int l=-1, r=-1,p=-1;

         if(a->Left!=NULL){
            l = a->Left->value;
            q.push(a->Left);
         }
         if(a->Right!=NULL){
            r = a->Right->value;
            q.push(a->Right);
         }
         }
         

         cout<<"Node value = "<<a->id<<" left child = "<<l<<" Right child = "<<r<<endl;
        }


       void Insert(int value){

        node * newndoe = CreateNewNode(value);

        if (root==NULL)
        {
            root = newndoe;
            return;
        }

        node* cur = root;
        node * prv = NULL;
        
        while (cur!=NULL)
        {
            if (newndoe->value > cur->value)
            {
                prv = cur;
                cur=cur->Right;
            }else
            {
                prv = cur;
                cur = cur->Right;
            }
            
            
        }

        if (newndoe->value>prv->value)
        {
            prv->Right = newndoe;
        }else
        {
            prv->Left = newndoe; 
        }
        
        
        
        
       } 
    


};

int main(){

    BST b;
    b.Insert(6);
    b.Insert(4); b.Insert(3); b.Insert(5); b.Insert(7); b.Insert(8);

    b.BFS();

    return 0;
}