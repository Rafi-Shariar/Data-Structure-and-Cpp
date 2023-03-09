#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
     vector<int>a(n);

     for (int i = 0; i < n; i++)
     {
        cin>>a[i];
     }

      string ans = "NO\n";

    for (int i = 0; i < n; i++)
    {
        

        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                continue;
            }
            if (a[i]==a[j])
            {
                ans="Yes\n";
            }
            
            
        }
        
    }

    cout<<ans<<endl;
    
     
    
    
    return 0;
}

/*
time complexity : O(n + n^2) = O (n^2)
n^2 bcz 2nd loop er moddhe arekta loop cholche jeita i er proti man er jonno n bar cholche.

*/