#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
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

    node* CreateNewNode(int id)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void build_binary_tree()
    {
            node* allnode[6];

        for(int i=0;i<6;i++)
            allnode[i] = CreateNewNode(i);

        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->Left = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->Left = allnode[3];
        allnode[2]->Right = allnode[4];
        allnode[2]->parent = allnode[0];

        allnode[5]->parent = allnode[1];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];
        root = allnode[0];
    }


    //in order

    void Inorder(node * a){

        if (a==NULL)
        {
            return;
        }

        Inorder(a->Left);
        cout<<a->id<<" ";
        Inorder(a->Right);
        
    }

    //Pre order
       void Preorder(node * a){

        if (a==NULL)
        {
            return;
        }
        
         cout<<a->id<<" ";
        Preorder(a->Left);
        Preorder(a->Right);
        
    }

    //post order
        void Postorder(node * a){

        if (a==NULL)
        {
            return;
        }
        
         
        Postorder(a->Left);
        Postorder(a->Right);
        cout<<a->id<<" ";
        
    }

    

};


int main()
{
    BinaryTree bt;
    bt.build_binary_tree();

   cout<<"Inorder"<<endl;
   bt.Inorder(bt.root);
   cout<<endl;
   
   cout<<"Preorder"<<endl;
   bt.Preorder(bt.root);
   cout<<endl;

   cout<<"Post Order"<<endl;
   bt.Postorder(bt.root);
   cout<<endl;



    return 0;
}
