#include<bits/stdc++.h>
using namespace std;


int prec(char ch){
   
    if(ch == '+' || ch =='-'){
     
        return 1;


    }
    else if( ch=='*' || ch=='/')
    {
        return 2;
    }


    return 0;
     
}


string ConvertPostfix(string infix){


    string ans ="";
    stack<char>s;
    int idx=0;


    while (infix[idx]!='\0')
    {
        if (infix[idx]>='a' && infix[idx]<='z')
        {
            ans+=infix[idx];
            idx++;
        }
        else if (infix[idx]=='(')
        {
            s.push(infix[idx]);
            idx++;
        }
        else if (infix[idx]==')')
        {
            while (s.top()!='(')
            {
                ans += s.top();
                s.pop();
            }


            s.pop();
            idx++;
           
        }else
        {
            while (s.size() && prec(s.top())>=prec(infix[idx]))
            {
                ans += s.top();
                s.pop();
            }


            s.push(infix[idx]);
            idx++;
           
        }  
       
    }


    while (s.size())
    {
        ans+= s.top();
        s.pop();
    }


    return ans;
   
   
}
int main(){


    string infix;
    cin>>infix;


    string postfix = ConvertPostfix(infix);


    cout<<postfix<<endl;


    return 0;
}
