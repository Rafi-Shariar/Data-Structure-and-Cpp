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

   
   void Delete(int value){
      
      node * cur = root;
      node * prv = NULL;

      while (cur != NULL)
      {
         if (value> cur->value)
         {
            cur = cur->Right;
         }else if(value < cur->value)
         {
            cur = cur->Left;
         }else
         {
            break;
         }
         
         
      }

      if (cur==NULL)
      {
        cout<<"not found"<<endl;
        return;
      }
       //case 1
      if (cur->Left==NULL && cur->Right==NULL)
      {
        if (prv->Left->value == cur->value)
        {
            prv->Left=NULL;
        }else
        {
            prv->Right=NULL;
        }

        delete cur;
        return;   
        
        
      }

      //case 2
      if (cur->Left==NULL && cur->Right !=NULL)
      {
          if (prv->Left!=NULL && prv->Left->value == cur->value)
        {
            prv->Left=cur->Right;
        }else
        {
            prv->Right=cur->Right;
        }

        delete cur;
        return;
      }

       if (cur->Left!=NULL && cur->Right ==NULL)
      {
          if (prv->Left!=NULL &&  prv->Left->value == cur->value)
        {
            prv->Left=cur->Left;
        }else
        {
            prv->Right=cur->Left;
        }

        delete cur;
        return;
      }


      //case 3

      node * tmp = cur->Right;
      while (tmp->Left!=NULL)
      {
        tmp = tmp->Left;
      }

      int saved = tmp->value;
      Delete(saved);

      cur->value = saved;
      
      
   }


      
    


};

int main(){

    BST b;
    b.Insert(6);
    b.Insert(4); b.Insert(3); b.Insert(5); b.Insert(7); b.Insert(8);


 
 

    return 0;
}