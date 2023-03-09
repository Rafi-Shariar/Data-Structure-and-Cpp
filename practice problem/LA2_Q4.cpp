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
        if (infix[idx]>='1' && infix[idx]<='9')
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

int sum(string postfix){

    string s = ConvertPostfix(postfix);

    stack<int>ans;
    int i=0;
    while (s[i]!='\0')
    {
        if (s[i]>='1' && s[i]<='9')
        {
            int x = (int)s[i]-48;
            ans.push(x);
            i++;
        }else
        {
            int result;
            int a=ans.top();
            ans.pop();
            int b = ans.top();
            ans.pop();
            if (s[i]=='+')
            {
                result=a+b;
                ans.push(result);
                
            }
             if (s[i]=='-')
            {
                result=b-a;
                ans.push(result);
                
            }
             if (s[i]=='*')
            {
                result=a*b;
                ans.push(result);
                
            }
             if (s[i]=='/')
            {
                result=b/a;
                ans.push(result);
                
            }

            i++;
            
        }
        
        
    }

    return ans.top();
    

}



int main(){


    string infix;
    cin>>infix;

    int ans = sum(infix);

    cout<<ans<<endl;


    return 0;
}
