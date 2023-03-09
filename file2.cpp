#include<iostream>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;
int main(){

    ifstream ifs;
    ifs.open("input2.txt"); //maping input file

    int x; double y,z;  

    ifs>> x >> y >> z ;

    cout<< x << y << z << endl; //output in console

    ifs.close();



    return 0;
}