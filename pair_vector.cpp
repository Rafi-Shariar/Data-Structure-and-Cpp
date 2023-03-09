#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;

/*    vector< pair<string,int> > v;

    for (int i = 0; i < n; i++)
    {
        string name;
        int age;
        cin>>name>>age;

        v.push_back({name,age});
    }

    for (int i = 0; i < n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
*/


    vector< pair< pair<string,string>,int> > v;

    for (int i = 0; i < n; i++)
    {
        string name;
        string sur_name;
        int age;
        cin>>name>>sur_name>>age;

        v.push_back({ {name,sur_name},age });
    }

    for (int i = 0; i < n; i++)
    {
       cout<< v[i].first.first <<" "<<v[i].first.second<<" "<<v[i].second<<endl;
    }
    
    

    



    return 0;
}