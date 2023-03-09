#include<bits/stdc++.h>
using namespace std;

vector<int>merge_sort(vector<int>a){

    if (a.size()<=1)
    {
        return a;
    }

    int mid = a.size()/2;

    vector<int>b,c;

    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
    }

    for (int i = mid; i < a.size() ; i++)
    {
        c.push_back(a[i]);
    }

    vector<int>sorted_b=merge_sort(b);
    vector<int>sorted_c=merge_sort(c);

    vector<int>sorted_a;

    int pos1=0;
    int pos2=0;

    for (int i = 0; i < a.size(); i++)
    {
        if (pos1==sorted_b.size())
        {
            sorted_a.push_back(sorted_c[pos2]);
            pos2++;
        }
        else if (pos2==sorted_c.size())
        {
            sorted_a.push_back(sorted_b[pos1]);
            pos1++;
        }

        else if (sorted_b[pos1]<sorted_c[pos2])
        {
            sorted_a.push_back(sorted_b[pos1]);
            pos1++;
        }else
        {
            sorted_a.push_back(sorted_c[pos2]);
            pos2++;
        }
        
          
        
    }


    return sorted_a;
    
    
    
    
}
int main(){

    int n; cin>>n;

    vector<int>a;

    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;

        a.push_back(x);
    }

    vector<int>ans = merge_sort(a);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

  
    
    


    return 0;
}