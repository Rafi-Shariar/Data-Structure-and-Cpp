#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;

    vector<int>a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int low =0 , high=n-1;

    while (low<=high)
    {
        int mid=(low+high)/2;

        if (a[mid]==k)
        {
            cout<<"yes\n"<<mid<<endl;
        }
        if (a[mid]>k)
        {
            high = mid - 1;
        }else
        {
            low = mid + 1;
        }
        
        
    }
    
    return 0;
}
/*
10 10 
2 4 6 7 8 9 10 11 14 18
*/