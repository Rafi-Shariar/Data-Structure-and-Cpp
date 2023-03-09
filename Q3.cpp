#include<bits/stdc++.h>
using namespace std;
int k;
int n;
vector<int> marge_sort(vector<int>a){

  if (a.size()<=1)
    {
        return a;
    }

    int mid = a.size()/2;

    vector<int>b;
    vector<int>c;

    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]); // b vector a element pathalam

    }
    for (int i = mid; i < a.size() ; i++)
    {
        c.push_back(a[i]);
    }

    vector<int>sorted_b = marge_sort(b); //recursive call to this function
    vector<int>sorted_c = marge_sort(c);

    vector<int>sorted_a; // will return this
    int idx1 = 0;
    int idx2 = 0;
    
    for (int i = 0; i < a.size(); i++)
    {
        if (idx1==sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (idx2==sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1]<sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++; 
        }     
        
    }

    int i=0, j=a.size()-1;
    int count=0;

    vector<int>asn;

    while (i<j)
    {
      if (sorted_a[i]+sorted_a[j]>k)
      {
        j--;
      }else if (sorted_a[i]+sorted_a[j]<k)
      {
        i++;
      }else if (sorted_a[i]+sorted_a[j]==k)
      {
        count++;
        i++; 
        count++;     
      }   
    }
      asn.push_back(count) ;
    
    return asn;
}

int main(){
  cin>>n;
  vector<int>a(n);
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  cin>>k;

  vector<int>ans = marge_sort(a);

  cout<<ans[n]<<endl;


  return 0;
}