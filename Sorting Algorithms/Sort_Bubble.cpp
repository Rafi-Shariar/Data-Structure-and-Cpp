#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ; cin>>n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //sorting
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < (n-1-i); j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
             
            }
            
            cout<<i<<"--"<<j<<endl;

            
        }
       
        
        
    }


    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}