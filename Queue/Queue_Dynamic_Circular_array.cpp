#include<bits/stdc++.h>
using namespace std;


class Queue{
    public:

    int *a;
    int array_cap;
    int l,r;
    int sz;

    Queue(){

        a= new int[1];
        array_cap=1;
        l=0;
        r =- 1;
        sz=0;
    }

    void remove_circular(){

        if (l>r)
        {
           int *tmp = new int[array_cap];
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
           r=array_cap-1;
           
        
        }
          

    }

    void increase_size(){

        remove_circular();

        int *tmp = new int[array_cap*2];
        for (int i = 0; i <array_cap; i++)
        {
            tmp[i]=a[i];
        }

        swap(a,tmp);
        array_cap = array_cap*2;

        delete [] tmp;
        


    }

    //inserting a value O(1)
    void enqueue(int value){

      if (sz==array_cap)
      {
         increase_size();
     
      }
       r++;

       if (r==array_cap)
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

        if (l==array_cap)
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

  cout<<q.size()<<endl;



    return 0;
}