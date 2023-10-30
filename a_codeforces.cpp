#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
     
   int flag=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='4' || s[i]=='7')
        {
            continue;
        }else
        {
            flag=1;
        }
        
        
        
    }

    if (flag==1)
    {
        cout<<"NO"<<endl;
    }else
    {
        cout<<"YES"<<endl;
    }
    
    

  
        
        
    
    
    
    


    return 0;
}