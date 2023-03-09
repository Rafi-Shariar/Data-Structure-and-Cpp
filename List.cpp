#include<bits/stdc++.h>
using namespace std;
void print(list<int>l){
  
    for (auto i = l.begin(); i!=l.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<"\n";
    
    
}
int main(){

    list<int> l;

    l.push_front(10);  // works as insert at head
    l.push_front(20);
    l.push_front(30);

    // this linked list is 30,20,10

    print(l);

    l.push_back(40); // works as insert at tail
    print(l);

    l.pop_back();
    print(l);

    l.pop_front();
    print(l);

    return 0;
}