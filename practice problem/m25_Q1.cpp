#include<bits/stdc++.h>
using namespace std;
const int max_size = 10;
template<class T>
class Queue{
    public:

    T arr[max_size];
    int l,r;
    int sz;

    Queue(){
        l=0;
        r= -1;
        sz=0;
    }


    void enqueue(T val){

        if(sz==max_size){

            
            return;
        }

        r++;
        if (r==max_size)
        {
            r=0;
        }

        arr[r] = val;
        sz++;
        
    }

    void dequeue(){

        if (sz==0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;

        if (l==max_size)
        {
            l=0;

        }

        sz--;
        
        
    }


    T fornt(){

        if (sz==0)
        {
            T a;
            return a;
        }

        return arr[l];
        
    }

    int size(){

        return sz;
    }



};
int main(){

    Queue<int> q;

    q.enqueue(12);
    q.enqueue(24);
    q.enqueue(30);
    q.enqueue(100);
    q.enqueue(69);

    cout<<"Front : "<<q.fornt()<<endl;
    cout<<"Size : "<<q.size()<<endl;

    q.dequeue();

    cout<<"after dequeue : "<<q.size()<<endl;



    return 0;
}