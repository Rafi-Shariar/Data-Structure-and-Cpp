#include<bits/stdc++.h>
using namespace std;

const int max_size = 500;
class Queue{
    public:

    int a[max_size];
    int l,r;
    int sz;

    Queue(){
        l=0;
        r =- 1;
        sz=0;
    }

    //inserting a value O(1)
    void enqueue(int value){

      if (sz==max_size)
      {
        cout<<"Queue is Full"<<endl;
        return;
      }
       r++;

       if (r==max_size)
       {
        r==0;
       }
             
        a[r] = value;
        sz++;
    }

    //deleting 1st eleement O(1)
    void dequeue(){

        if (sz==0)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }

        l++;

        if (l==max_size)
        {
            l=0;
        }

        sz--;
        


    }

    //returning queue 1st element O(1)
    int front(){

        if (sz==0)
        {
           return -1;
        }

        return a[l];
        
    }

    //maintaing size
    int size(){

        return sz;
    }



};
int main(){

    Queue q;

    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(7);

    cout<<"Front : "<<q.front()<<endl;

  cout<<q.size()<<endl;



    return 0;
}