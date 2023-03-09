#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;

    vector<int>a(n); // n size of array

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int maxx = a[0];
    int minn = a[0];
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
        sum = sum+a[i]; 
    }

    cout<<"maximum : "<<maxx<<endl;
    cout<<"minimum : "<<minn<<endl;
    cout<<"sum : "<<sum<<endl;

    


    return 0;
}

/*
time complecity : O ( n + 1 + n + 1) = O(2*n + 1) = O (2*n) = O (C*n) = O(n)

variale number of oparation (2*n) oboshshoi constant number of oparation k dominate kore tai constant oparation ( 1) ta kete dilam.
n er shathe 2 gun ache tai otakeo bad diye = O(n) hobe

 n = input loop
 1 = 14,15,16 num line er constant oparation
 n = working loop
 1 = woring loop er moddhe constand oparations

 memory complexity : O(n)
*/