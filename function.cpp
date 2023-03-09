#include<bits/stdc++.h>
using namespace std;

void erase_First_Last(string &s);
int main(){

    string s;
    cin>>s;

    erase_First_Last(s);

    cout<<s<<"\n";


    return 0;
}

void erase_First_Last(string &s){

    s.erase(s.begin());
    s.pop_back();

    
}