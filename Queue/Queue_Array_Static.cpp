#include<bits/stdc++.h>
using namespace std;

const int max_size = 500;
class Queue{
    public:

    int a[max_size];
    int l,r;

    Queue(){
        l=0;
        r =- 1;
    }

    //inserting a value O(1)
    void enqueue(int value){

        if (r+1>max_size)
        {
            cout<<"Queue is full\n";
            return;
        }
        

        r++;
        a[r] = value;
    }

    //deleting 1st eleement O(1)
    void dequeue(){

        if (l>r)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }

        l++;
        
    }

    //returning queue 1st element O(1)
    int front(){

        if (l>r)
        {
           return -1;
        }

        return a[l];
        
    }

    //maintaing size
    int size(){

        return r-l+1;
    }



};
int main(){

    Queue q;

    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(7);

    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    



    return 0;
}