#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    int value;
    node *Left;
    node *Right;
    node *parent;
};
// Manually insert nodes in a binary tree and print information of the tree
class BinaryTree{
public:
    node* root;


    BinaryTree()
    {
        root = NULL;
    }

    node* CreateNewNode(int id,int val)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->value=val;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

   void Insertion(int id,int val){
    
    node * newnode = CreateNewNode(id,val);
    if (root==NULL)
    {
        root = newnode;
        return;
    }

    queue<node*>q;

        q.push(root);

        while (!q.empty())
        {
         node * a = q.front();
         q.pop();


         if(a->Left!=NULL){
         
            q.push(a->Left);
         }
         else
         {
            a->Left=newnode;
            newnode->parent=a;
            return;
         }
         

         if(a->Right!=NULL){
    
            q.push(a->Right);
         }else
         {
            a->Right=newnode;
            newnode->parent=a;
            return;
         }
         
       
         
        }
        
    
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

         int p = -1, l=-1, r=-1;

         if(a->Left!=NULL){
            l = a->Left->id;
            q.push(a->Left);
         }
         if(a->Right!=NULL){
            r = a->Right->id;
            q.push(a->Right);
         }
         if (a->parent!=NULL)
         {
            p = a->parent->id;
         }
         

         cout<<"Node id = "<<a->id<<" left child = "<<l<<" Right child = "<<r<<endl;
        }
        
    }

    void Search(node * a,int val){

        if (a==NULL)
        {
            return;
        }

        if (a->value==val)
        {
            cout<<a->id<<" ";
        }

        Search(a->Left,val);
        Search(a->Right,val);
        
        
    }

    

};


int main()
{
    BinaryTree bt;

    bt.Insertion(0,5);
    bt.Insertion(1,10);
    bt.Insertion(2,10);
    bt.Insertion(3,9);
    bt.Insertion(4,8);
    bt.Insertion(5,5);
    bt.Insertion(6,6);


    bt.Search(bt.root, 5);


    return 0;
}
