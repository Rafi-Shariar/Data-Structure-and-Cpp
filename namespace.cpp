#include<bits/stdc++.h>
using namespace std;

int x=5;

namespace info{
    int x=10;

    int func(int a,int b){
        return a*b;
    }
}

int main(){

    cout<<x<<"\n"; //golabal

    cout<<info::x<<"\n"; //namescapce

    int a=5,b=6;

    int z=info::func(a,b); //namespace function
    cout<<z<<"\n";


    return 0;
}
