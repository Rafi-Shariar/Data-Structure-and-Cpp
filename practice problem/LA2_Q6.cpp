#include<bits/stdc++.h>
using namespace std;

void Check_palindrome(deque<char>&d){
    
    int flag = 0;
    int sz = d.size()/2;

    while (sz!=0)
    {
        if (d.front()==d.back())
        {
            d.pop_front();
            d.pop_back();
        }else
        {
            flag = 1;
            break;
        }

        sz--;
        
    }

    if (flag==0)
    {
         cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }

    return;
      
}
int main(){

    string s;
    cin>>s;

    deque<char>d;

   for (auto i = 0; i < s.size(); i++)
   {
     d.push_back(s[i]);
   }

   Check_palindrome(d);

   return 0;  
}