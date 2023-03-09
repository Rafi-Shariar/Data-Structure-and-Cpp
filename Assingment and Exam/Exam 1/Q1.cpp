/*
WAP that takes n integer numbers, sorts them in non-increasing order using Quick sort
*/
#include<bits/stdc++.h>
using namespace std;


vector<int> quick_sort(int n, vector<int>&a){


  if (n<=1)
  {
    return a;
  }


  int pivot = n/2;


  vector<int> b;
  vector<int> c;


  for (int i = 0; i < n; i++)
  {
    if (i==pivot)
    {
      continue;
    }


    if (a[i]>a[pivot])
    {
      b.push_back(a[i]);
    }else
    {
      c.push_back(a[i]);
    }
   
  }


  int szb = b.size();
  int szc = c.size();


  vector<int>sorted_b = quick_sort(szb,b);
  vector<int>sorted_c = quick_sort(szc,c);


  vector<int>sorted_a;


  for (int i = 0; i < sorted_b.size(); i++)
  {
    sorted_a.push_back(sorted_b[i]);
  }


  sorted_a.push_back(a[pivot]);


  for (int i = 0; i < sorted_c.size(); i++)
  {
    sorted_a.push_back(sorted_c[i]);
  }


  return sorted_a;
 
}


int main(){


  int n; cin>>n;


  vector<int>a(n);


  for (int i = 0; i < n; i++)
  {
     cin>>a[i];
  }


  vector<int>sort_a=quick_sort(n,a);


  for (int i = 0; i < n; i++)
  {
     cout<<sort_a[i]<<" ";
  }
 
  return 0;


}
