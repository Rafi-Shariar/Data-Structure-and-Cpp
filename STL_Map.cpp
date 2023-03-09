#include<bits/stdc++.h>
using namespace std;
int main(){

    map<string , int> mp; // key = string , value = int

    mp["goru"] = 1;
    mp["chagol"] = 2;
    mp["vera"] = 3;

    cout<<mp["goru"]<<endl;

    for(auto i : mp){

        cout<<"key : "<<i.first<<" "<<"Value : "<<i.second<<end
    }

    


    return 0;
}