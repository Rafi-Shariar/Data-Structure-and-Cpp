#include<bits/stdc++.h>
using namespace std;
int main(){

    //swap function
    int a=5,b=10,c=12,d=2;
    swap(a,b);
    cout<<a<<" "<<b<<endl;


    //find min and max

    int minimun = min({a,b,c,d});
    cout<<minimun<<endl;

    int maximum = max({a,b,c,d});
    cout<<maximum<<endl;

    //soting in accending order

    vector<int>x = {3,6,2,1,3,6};

    sort(x.begin() , x.end());

    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i]<<" ";
    }

    cout<<"\n";


    // sorting between 1st to 3rd index

    vector<int>y = {5,4,3,2,1};

    sort(y.begin()+1 , y.begin()+3+1);  //extra ekta +1 dite hoy sort er jonno

    for (int i = 0; i < y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    
    






    return 0;
}