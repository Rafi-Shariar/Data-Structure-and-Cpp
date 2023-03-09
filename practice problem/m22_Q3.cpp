#include<bits/stdc++.h>
using namespace std;

void deleteZero(list<int>&l){

  for (auto i = l.begin(); i!= l.end(); )
  {
     if (*i==0)
     {
        auto temp = i;
        i++;
       l.erase(temp);
    
     }else
     {
        i++;
     }
     
     
  }
  

}
int main(){

    list<int>l;

    l.push_back(0);
    l.push_back(2);
    l.push_back(0);
    l.push_back(0);
    l.push_back(5);

     deleteZero(l);
     for (auto i = l.begin(); i != l.end(); i++)
     {
       cout<<*i<<" ";
     }

     
     

    return 0;
}