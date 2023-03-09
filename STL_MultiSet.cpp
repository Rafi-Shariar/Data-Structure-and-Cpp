#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> a;
   
   a.insert(5); //logn
   a.insert(4);
   a.insert(7);
   a.insert(2);
   a.insert(7);
   a.insert(5);

   for(auto i : a) cout<<i<<" ";
   cout<<endl; 

   cout<<"Size : "<<a.size()<<endl;

   a.erase(5); //will all number of the value

   for(auto i : a) cout<<i<<" ";
   cout<<endl; 

   //erase a single occurance
    a.erase(a.find(7));

     for(auto i : a) cout<<i<<" ";
   cout<<endl;

    return 0;
}