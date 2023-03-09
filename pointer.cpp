#include<bits/stdc++.h>
using namespace std;
int main(){

    int x=100;

    int * y=&x;

    cout<<y<<"\n"; //printing adress
    cout<<*y<<endl; //printing value


    return 0;
}