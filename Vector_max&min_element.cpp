#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;

    vector<int>v;

    for (int i = 0; i < n; i++)
    {
       int input;
       cin>>input;
       v.push_back(input);
    }

   int max=*max_element(v.begin(),v.end());

   int min=*min_element(v.begin(),v.end());

   cout<<max<<endl;
   cout<<min<<endl;
    

    return 0;
}