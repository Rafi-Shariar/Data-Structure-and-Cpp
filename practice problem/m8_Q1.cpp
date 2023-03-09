#include<bits/stdc++.h>
using namespace std;

vector<int> marge(vector<int>a, vector<int>b){

    vector<int>sorted_c;

    int idx1=0;
    int idx2=0;

    int sz=a.size()+b.size();

    for (int i = 0; i < sz; i++)
    {
        if (a[idx1]<b[idx2])
        {
            sorted_c.push_back(b[idx2]);
            idx2++;
        }
        else if (a[idx1]>b[idx2])
        {
            sorted_c.push_back(a[idx1]);
            idx1++;
        }else if (a[idx1]==b[idx2])
        {
            sorted_c.push_back(a[idx1]);
            idx1++;
        }
        
        
    }

    return sorted_c;
    


}


int main(){

    int n; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int m; cin>>m;
    vector<int>b(m);
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    vector<int>ans = marge(a,b);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    



    return 0;
}