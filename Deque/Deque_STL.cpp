#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int>d;

    d.push_back(10);
    d.push_front(30);
    d.push_back(40);

    cout<<d.back()<<endl;
    cout<<d.front()<<endl;
    d.pop_back();
    d.pop_front();

    cout<<d.size()<<endl;

    return 0;
}