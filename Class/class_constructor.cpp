#include<bits/stdc++.h>
using namespace std;

class student{

    public:
    string name;
    int age;
    string fathers_name;
    string mothers_name;

    //constructor
    student(string s, int ag, string f_name, string m_name){

        name=s;
        age=ag;
        fathers_name=f_name;
        mothers_name=m_name;
    }

    //another constructor
    student(string name, int ag){
        this->name=name;   // name name mile gele aivabe initalize kore dite hoy.
        age=ag;
    }

    //empty constructor
    student(){

    }


};

int main(){

    student s("A", 10,"B","C");

    cout<<s.name<<endl<<s.age<<endl<<s.fathers_name<<endl<<s.mothers_name<<endl;

    student p("X",23);

    cout<<p.name<<" "<<p.age<<endl;




    return 0;
}