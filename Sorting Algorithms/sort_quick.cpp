#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int>&a){

    if (a.size()<=1)
    {
        return a;
    }

    int pivot = a.size()/2; //last index ta pivot hishebe nilam
   


   vector<int>b; //left vector a pivod er shoman + choto elemt thakbe
   vector<int>c; //right vector a pivot er boro elemnt gula thakbe


   for (int i = 0; i < a.size(); i++)
   {
     if (i==pivot) //index pivot er index hole continue korbo.
     {
        continue;
     }

     if (a[i]<a[pivot])
     {
        b.push_back(a[i]);
     }else
     {
        c.push_back(a[i]);
     }
     
     
     
   }

   vector<int>sorted_b = quick_sort(b);
   vector<int>sorted_c = quick_sort(c);
   
   vector<int>sorted_a;

   for (int i = 0; i < sorted_b.size(); i++) // left side er sorted vector ta push korlam
   {
     sorted_a.push_back(sorted_b[i]);
   }

   sorted_a.push_back(a[pivot]); //pilov elemt ta push korlam

   for (int i = 0; i < sorted_c.size(); i++)
   {
     sorted_a.push_back(sorted_c[i]);
   }

   
   
   return sorted_a;

   
    
}



int main(){

    vector<int>a = {5,2,3,5,4,1};

    vector<int>ans = quick_sort(a);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    


    return 0;
}