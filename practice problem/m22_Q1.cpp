#include<bits/stdc++.h>
using namespace std;
int getValue(list<int>&l, int index){

if (index>=l.size())
{
    return -1;
}

  auto it = l.begin();
  advance(it,index);

  return *it;
    
}
int main(){

    list<int> l;

    l.push_back(3);
    l.push_back(2);
    l.push_back(6);
    l.push_back(4);
    l.push_back(5);

    cout<<getValue(l,2)<<endl;

    

    return 0;
}