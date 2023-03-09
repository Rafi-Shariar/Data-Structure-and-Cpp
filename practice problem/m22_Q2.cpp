#include<bits/stdc++.h>
using namespace std;

bool search(list<int>&l, int value){

    for (auto i = l.begin(); i != l.end(); i++)
    {
        if (*i==value)
        {
            return true;
            break;
        }
        
    }

    return false;
    
}
int main(){

    list<int> l;
    l.push_back(3);
    l.push_back(2);
    l.push_back(6);
    l.push_back(4);
    l.push_back(5);

    if (search(l,4))
    {
        cout<<"true"<<endl;
    }else
    {
        cout<<"false"<<endl;
    }
    
    

    return 0;
}