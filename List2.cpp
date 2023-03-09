#include<bits/stdc++.h>
using namespace std;
void print(list<int>l){
  
    for (auto i = l.begin(); i!=l.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<"\n";
    
    
}

void insert(list<int>&l,int index, int value){
   
   auto it = l.begin();
    advance (it, index);
    l.insert(it, value);
    print(l);
}

void delet(list<int>&l, int index){

    auto it=l.begin();
    advance(it,index);
    l.erase(it);

    print(l);
}
int main(){

    list<int> l;

    l.push_front(10);  
    l.push_front(20);
    l.push_front(30);

    insert(l,1,100);

    delet(l,1);

 


    
    return 0;
}