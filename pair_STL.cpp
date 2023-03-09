#include<bits/stdc++.h>
using namespace std;
int main(){

    pair<string,int> p;

    p.first = " Rafi";
    p.second = 22;

    cout<<p.first<<" "<<p.second<<endl;

    // nested

    pair<pair<string,string>,int> p2;
     
     p2.first.first = "Rafi";
     p2.first.second = "Shariar";
     p2.second = 22;

     cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second<<endl;


    return 0;
}