#include<iostream>
#include<fstream>

using namespace std;
int main(){

    //printing output in any local file

    ofstream of;
    of.open("output1.txt");

    of<<"Hello Rafi, Welcome to C++"<<endl;


    return 0;
}