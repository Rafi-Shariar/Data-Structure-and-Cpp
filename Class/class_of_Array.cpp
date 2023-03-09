#include<bits/stdc++.h>
using namespace std;

class student{
    public:

    string name;
    int ID;
    int age;

    student(){

    }

    student(string name, int ID, int age){

        this->name=name;
        this->ID=ID;
        this->age=age;
    }

};
int main(){

    student arr[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i]=student("Rafi",i,22);
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].ID<<" "<<arr[i].age<<endl;
    }
    
    




    return 0;
}