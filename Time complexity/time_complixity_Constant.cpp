#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int maxx = max({a,b,c});
    int minn = min({a,b,c});
    int sum = a+b+c;
    int mul =a*b*c;

    cout<<maxx<<endl;
    cout<<minn<<endl;
    cout<<sum<<endl;
    cout<<mul<<endl;



    return 0;
}

/*
time complexity O(1) bcz aikhne constant instruction. user depended na.
memory complexity O(1) bcz Constant number of item. 

*/