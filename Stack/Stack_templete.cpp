#include<bits/stdc++.h>
using namespace std;

template<class T>
class Stack{  
    public:
    
    T *a;
    int stack_size;
    int cap;

    Stack(){

        a=new T[1];
        cap=1;

        stack_size=0;
    }

    void increase_size(){

        T *tmp;
        tmp = new T[cap*2];

        for (int i = 0; i < cap; i++)
        {
            tmp[i] = a[i];
        }

        swap(a,tmp);
        delete [] tmp;
        cap = cap*2;
         
    }

    // add an element in the stack 
    void push(T val){

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
    T top(){

        if (stack_size==0)
        {
            cout<<"Stack is empty"<<endl;
            assert(false); // this will crush the porgram
        }

        return a[stack_size-1];

    }

};
int main(){

    Stack<int> st;
    st.push(3);
    st.push(4);
    st.push(5);


   cout<<st.top()<<endl;

   Stack<char>st2;

   st2.push('R');
   st2.push('A');
   st2.push('F');
   st2.push('I');
   st2.push('T');

   cout<<st2.top()<<endl;


    return 0;
}