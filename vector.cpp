#include<bits/stdc++.h>
using namespace std;
int main(){

    vector <int>a;

    for (int i = 0; i < 5; i++)
    {
        a.push_back(i);
    }

    a.insert(a.begin() + 0, 99);  

    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<< " ";
    }
    

    return 0;
}