#include<bits/stdc++.h>
using namespace std;
int main(){
 
    string s;
    cin>>s;

    int a=0,c=0,g=0,t=0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='A')
        {
            a++;
        }else if (s[i]=='C')
        {
            c++;
        }else if (s[i]=='G')
        {
            g++;
        }else if (s[i]=='T')
        {
            t++;
        }
        
    }

    int rep=max({a,c,g,t});

    cout<<rep<<endl;
    
    
    
    return 0;
}