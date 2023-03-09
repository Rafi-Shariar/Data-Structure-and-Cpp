#include<bits/stdc++.h>
using namespace std;
int main(){

  int n; cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }

  deque<int>d;

  d.push_back(arr[0]);

  for (int i = 1; i <n; i++)
  {
    
    if (arr[i]>d.back())
    {
        d.push_back(arr[i]);
    }
    else if (arr[i]<d.front())
   {
        d.push_front(arr[i]);
      
    }
    
  }

  for(auto i : d){
    cout<<d.front()<<" ";
    d.pop_front();
  }

 
  return 0;
}