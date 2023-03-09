#include<bits/stdc++.h>
using namespace std;

class rectangle{
    public:

    int heigh,width;

    int area(){

        return heigh*width;
    }

    int peremeter(){

        return 2*(heigh+width);
    }
};
int main(){

    rectangle r1;

    cin>>r1.heigh;
    cin>>r1.width;

    cout<<r1.area()<<endl;
    cout<<r1.peremeter()<<endl;



    return 0;
}