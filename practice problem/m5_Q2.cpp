#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;

    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int q; cin>>q;

    for (int i = 1; i<= q; i++)
    {
        cin>>q;

        int flag=0;

        for (int j = 0; j < n; j++)
        {
            if (q==a[j])
            {
                cout<<"Yes\n"<<endl;
                flag=1;
            }
            
            
        }

        if (flag==0)
        {
            cout<<"No\n"<<endl;
        }
        
        
    }
    
    


    return 0;
}