#include<bits/stdc++.h>
using namespace std;
template<class T>
class Queue{
    public:

    T*a;
    int array_cap;
    int l,r;
    int sz;

    Queue(){

        a = new T[1];
        array_cap = 1;
        l=0;
        r= -1;
        sz=0;
    }

    void remove_circular(){

        if (l>r)
        {
            T* tmp = new T[array_cap];
            int idx=0;

            for (int i = l; i < array_cap; i++)
            {
                tmp[idx]=a[i];
                idx++;
            }

            for (int i = 0; i < r; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }

            swap(tmp,a);
            l = 0;
            r = array_cap-1;
            
            
        }
        
    }

    void increase_size(){

        remove_circular();

        T*tmp = new T[array_cap*2];

         for (int i = 0; i < array_cap; i++)
         {
            tmp[i] = a[i];
         }

         swap(a,tmp);
         array_cap = array_cap*2;

         delete []tmp;
         
    }

    void enqueue( T value){

        if (sz==array_cap)
        {
            increase_size();
        }

        r++;

        if (r==array_cap)
        {
            r=0;
        }

        a[r] = value;
        sz++;
        
        
    }

    void dequeue(){

        if (sz==0)
        {
            T a;
            return a;
        }

        l++;

        if (l==array_cap)
        {
            l=0;
        }
        
        sz--;
        
    }

    T front(){

        if (sz==0)
        {
            T a;
            return a;
        }

        return a[l];
        
    }

    int size(){
        return sz;
    }


};
int main(){

    Queue<int> q;

    cout<<q.front()<<endl;

    q.enqueue(12);
    q.enqueue(14);
    q.enqueue(999);

    cout<<" Size : "<<q.size()<<endl;

    cout<<"front : "<<q.front()<<endl;

}