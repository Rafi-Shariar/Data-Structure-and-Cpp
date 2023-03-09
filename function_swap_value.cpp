#include<bits/stdc++.h>
using namespace std;
void swap_values(int &a, int &b); 
int main(){

    int a=10,b=16;

    swap_values(a,b);

    cout<<a<<" "<<b<<"\n";
    


    return 0;
}
void swap_values(int &a, int &b){

    int temp;
    temp=a;
    a=b;
    b=temp;
}