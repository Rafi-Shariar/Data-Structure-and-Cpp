#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    string name;
    int std_id;
    int age;
    string fathers_name; 


    void print_info(){

        cout<<name<<endl<<std_id<<endl<<age<<endl<<fathers_name<<endl;
    }
};

int main(){

    Student s;
    s.name="Rafi Shariar";
    s.std_id = 12345;
    s.age = 22;
    s.fathers_name="Mahbubur Rahman";


    s.print_info();

    cout<<"\n";


      Student s2;
    s2.name="Muskan Shariar";
    s2.std_id = 56789;
    s2.age = 20;
    s2.fathers_name="Motin vodai";

    s2.print_info();



    return 0;
}