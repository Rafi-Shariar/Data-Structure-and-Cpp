#include<bits/stdc++.h>
using namespace std;
int main(){
    
    list<int> l;
    
    //insert at tail
    l.push_back(10);
    l.push_back(12);

    //insert at head
    l.push_front(99);

    // travasting linked it
    for( auto it=l.begin(); it!=l.end(); it++){

        cout<<*it<<" ";
    }

    cout<<"\n";

    //printing last element
    cout<<l.back()<<endl;

    //soting
    l.sort();
    for( auto it=l.begin(); it!=l.end(); it++){

        cout<<*it<<" ";
    } cout<<"\n";

    //deleting 1st element
    l.pop_front();
    for( auto it=l.begin(); it!=l.end(); it++){

        cout<<*it<<" ";
    }




    return 0;
}