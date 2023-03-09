#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int> st;

    st.push(10);
    st.push(05);  // works as insert at head
    st.push(20);
    st.push(30);

    //top , printing top element
    cout<<st.top()<<endl;

    // pop, deteles cur top elemet
    st.pop();
    cout<<st.top()<<endl;

    // size , prints size of stack

    cout<< st.size()<<endl;


    return 0;
}