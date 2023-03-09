#include<bits/stdc++.h>
using namespace std;
class person{
    public:

    string name;
    int age;
    int ID;

    person(string name, int age, int ID){

        this->name=name;
        this->age=age;
        this->ID=ID;
    }

};
int main(){

    person *p = new person("Rafi",22,1999); // this is dynamic object

    cout<< p->name << " "<<p->age<<" "<<p->ID<<endl;  //access method 1

    cout<< (*p).name << " " << (*p).age <<" "<<(*p).ID<<endl;  // access method 2


    return 0;
}