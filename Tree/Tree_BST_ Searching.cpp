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
                cur = cur->Left;
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



       bool Search(int value){

        node * cur = root;
        while (cur!=NULL)
        {
            if (value > cur->value)
            {
                cur = cur->Right;
            }
            else if (value < cur->value)
            {
                cur= cur->Left;
            }else
            {
                return true;
            }
            
                
        }

        return false;
        
       }


    


};

int main(){

       BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0
    return 0;


 

    return 0;
}