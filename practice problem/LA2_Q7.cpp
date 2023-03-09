#include<bits/stdc++.h>
using namespace std;

void travast(list<int>&l){

    for (auto it = l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
        
}

void deleteValue(list<int>&l, int value){

    for (auto it = l.begin(); it!=l.end(); it++)
    {
        if (*it==value)
        {
            l.erase(it);
            break;
        }
        
    }
    
    
}
int main(){

    list<int> l;

    l.push_back(7);
    l.push_back(3);
    l.push_back(8);
    l.push_back(4);
    l.push_back(5);
    l.push_back(4);

    travast(l);

    deleteValue(l,4);

    travast(l);

    return 0;
}