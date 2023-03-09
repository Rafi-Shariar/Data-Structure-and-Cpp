#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>a,int n){

    if (a.size()<=1)
    {
        return 0;
    }

    return a[n]+sum(a,n-1);
   
}
int main(){

    int n; cin>>n;

    vector<int>a;

    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        a.push_back(x);
    }

    int ans = sum(a,n-1);

    cout<<ans<<endl;
    


    return 0;
}