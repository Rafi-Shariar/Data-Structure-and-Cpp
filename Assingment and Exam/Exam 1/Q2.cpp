/*
WAP that takes n-1 integer numbers, which contains distinct integers from 1 to n. Exactly one number between 1 to n is missing. Find that number in O(n).
*/
#include<bits/stdc++.h>
using namespace std;


int find_number(vector<int>&a,int n){


  sort(a.begin(),a.end());
 
  for (int i = 0; i < n; i++)
  {
    if (i!=a[i])
    {
      return i;
      break;
    }
   
  }
 
}


int main(){


  int n; cin>>n;
  vector<int>a(n);


  for (int i = 0; i < n-1; i++)
  {
    cin>>a[i];
  }


  int ans = find_number(a,n);


  cout<<ans<<endl;


  return 0;
 
}
