#include<bits/stdc++.h>
using namespace std;

int find_palindrome(string word,int start,int end){

  
  if (start>=end)
  {
    return 1;
  }
  
  if (word[start]!=word[end])
  {
    return 0;
  }
  else 
  {
    return find_palindrome(word,start+1,end-1);
  }
  
}
int main(){

    string word;
    cin>>word;
    int len = word.length();

    int ans=find_palindrome(word,0,len-1);

    if (ans==true)
    {
      cout<<"Yes\n";
    }else
    {
      cout<<"No\n";
    }
    
    


    

    return 0;
}
