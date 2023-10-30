#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int value;
    node* Left;
    node* Right;
};

class BST {
public:
    node* root;

    BST() {
        root = NULL;
    }

    node* CreateNewNode(int val) {
        node* newnode = new node;
        newnode->value = val;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }

    void BFS() {
        if (root == NULL) {
            return;
        }

        queue<node*> q;
        q.push(root);

        while (!q.empty()) {
            node* a = q.front();
            q.pop();

            int l = -1, r = -1; // Initialize l and r

            if (a->Left != NULL) {
                l = a->Left->value;
                q.push(a->Left);
            }
            if (a->Right != NULL) {
                r = a->Right->value;
                q.push(a->Right);
            }

            // Print the node's value and its left and right children
            cout << "Node value = " << a->value << " left child = " << l << " Right child = " << r << endl;
        }
    }

    void Insert(int value) {
        node* newnode = CreateNewNode(value);

        if (root == NULL) {
            root = newnode;
            return;
        }

        node* cur = root;
        node* prv = NULL;

        while (cur != NULL) {
            prv = cur; // Fix the previous node assignment

            if (newnode->value > cur->value) {
                cur = cur->Right;
            }
            else {
                cur = cur->Left; // Fix the assignment for the Left child
            }
        }

        if (newnode->value > prv->value) {
            prv->Right = newnode;
        }
        else {
            prv->Left = newnode;
        }
    }
};

int main() {
    BST b;
    b.Insert(6);
    b.Insert(4);
    b.Insert(3);
    b.Insert(5);
    b.Insert(7);
    b.Insert(8);

    b.BFS();

    return 0;
}
