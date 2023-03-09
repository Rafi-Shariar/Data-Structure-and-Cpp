#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
class Stack{  
    public:
    
    int a[MAX_SIZE];
    int stack_size;

    Stack(){

        stack_size=0;
    }

    // add an element in the stack O (1)
    void push(int val){

        if (stack_size+1> MAX_SIZE)
        {
            cout<<"Stack is full"<<endl;
            return;
        }

        stack_size = stack_size+1;
        a[stack_size-1] = val;
        

    }

    //delet the top leement in the stack
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


};
int main(){

    Stack st;

    st.push(3);
    st.push(4);
    st.push(5);

   cout<< st.top()<<endl;

   st.pop();
   cout<<st.top()<<endl;


    return 0;
}