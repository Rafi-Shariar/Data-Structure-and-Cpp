#include<bits/stdc++.h>
using namespace std;

class student_info{

    public:

    string name;
    int age;


};

class marks{
public:
     student_info s;  // using a class in another class;
     int bangla;
     int english;
     int math;

    
};
int main(){

    marks a;
    
    a.s.name="Rafi";
    a.s.age=22;
    a.bangla=80;
    a.english=81;
    a.math=82;

    
     cout<<a.s.name<<endl<<a.s.age<<endl<<a.bangla<<endl<<a.english<<endl<<a.math<<endl;


    return 0;
}


