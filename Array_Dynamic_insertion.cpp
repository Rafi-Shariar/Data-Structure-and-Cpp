#include<bits/stdc++.h>
using namespace std;

class Array{
    private:
    int * arr;
    int cap;
    int sz;

    void increase_size(){

        cap = cap*2;
        int *tmp = new int[cap];

        for (int i = 0; i < sz; i++)
        {
            tmp[i] = arr[i];
        }
        
    }

    public:
    Array(){

        arr = new int[1];
        cap = 1;
        sz = 0;
    }

    void push_back(int x){
         
         if (cap==sz)
         {
            increase_size();
         }
         
        arr[sz]=x;
        sz++;

    }

    void print(){

        for (int i = 0; i < sz; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

    int getsize(){
        return sz;
    }

    int getelement(int idx){

        if(idx>=sz){
            cout<<"Error"<<endl;
        }

        return arr[idx];

    }

};
int main(){

    Array a;
    a.push_back(20);
    a.push_back(30);
    a.push_back(50);

    a.print();

    cout<<a.getsize()<<endl;
    




    return 0;
}