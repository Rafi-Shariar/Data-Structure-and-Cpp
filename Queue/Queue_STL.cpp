#include<bits/stdc++.h>
using namespace std;
int main(){

    queue<int> q;

    q.push(10);  // this is enqueue
    q.push(18);
    q.push(16);
    q.push(20);

    cout<<q.front()<<endl; // this is front

    q.pop();  // this is dequeue

    cout<<q.front()<<endl;

    cout<<q.empty()<<endl; // empty returs if queue is empty or not
    
    cout<<q.size()<<endl; // returns queue size




    return 0;
}