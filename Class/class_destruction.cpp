#include<bits/stdc++.h>
using namespace std;

class person{
    public:

    string name;
    person*father;
    person*mother;

    //empty construction becasue "new person" er kono perameter thakbe na.aita takle dewar jonno.
    person(){
        father = NULL;
        mother = NULL;
    }

    //construction

    person(string name, string f_name, string m_name){

        this->name=name;

        father = new person;
        father->name=f_name;

        mother = new person;
        mother->name = m_name;
    }

    // destructor

    ~person(){

        cout<<"called ";

        delete father;
        delete mother;
    }

};
int main(){

    person p("A","B","C");

    cout<<p.name<<" "<<p.father->name<<" "<<p.mother->name<<endl;


    return 0;
}