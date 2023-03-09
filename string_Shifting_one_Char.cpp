#include<bits/stdc++.h>
using namespace std;
int main(){

    string s="ABCD";
    
    int len=s.size();

    for (int i = 0; i < len; i++)
    {
        s[i]=s[i]+1;
        cout<<s[i]<<"\n";
    }
    
   

    return 0;
}