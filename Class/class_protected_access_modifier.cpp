#include<bits/stdc++.h>
using namespace std;

class user{

    protected:
    string name;
    int age;

};

class admin: user{

    private:
    string designation;


    public:
    void set(string s, int ag, string dg){

        name=s;
        age=ag;
        designation=dg;
    }

    void print(){
        cout<<name<<endl<<age<<endl<<designation<<endl;
    }

};
int main(){

    admin ad;
    ad.set("Rafi",22,"Officer");
    ad.print();


    return 0;
}