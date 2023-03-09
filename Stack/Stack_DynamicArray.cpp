#include<bits/stdc++.h>
using namespace std;

class Stack{  
    public:
    
    int *a;
    int stack_size;
    int cap;

    Stack(){

        a=new int[1];
        cap=1;

        stack_size=0;
    }

    void increase_size(){

        int *tmp;
        tmp = new int[cap*2];

        for (int i = 0; i < cap; i++)
        {
            tmp[i] = a[i];
        }

        swap(a,tmp);
        delete [] tmp;
        cap = cap*2;
         
    }

    // add an element in the stack 
    void push(int val){

        if (stack_size+1> cap)  
        {
            increase_size();
        }

        stack_size = stack_size+1;  
        a[stack_size-1] = val; 
        

    }

    //delet the top leement in the stack -
    void pop(){

        if (stack_size==0)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        

        stack_size=stack_size-1;

    } 
   
   //returns the top element from the top 
    int top(){

        if (stack_size==0)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        return a[stack_size-1];

    }

    // accessing any index
        int indexValue(int index){

        if (index>stack_size)
        {
            return -1;  
        }

        return a[index]; 
        
    }

    

};
int main(){

    Stack st;

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

   cout<<st.indexValue(3)<<endl;


    return 0;
}