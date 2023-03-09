#include<bits/stdc++.h>
using namespace std;

class person{
public:

   string name;
   person* father;
   person* mother;


};
int main(){

    person p;

    p.name="Rafi Shariar";

    p.father= new person;  //poiting the pointer to something
    p.mother= new person;

    p.father->name="Rahman";
    p.mother->name="Afsana";


    cout<<p.name<<endl;
    cout<<p.father->name<<endl;
    cout<<p.mother->name<<endl;

    return 0;
}