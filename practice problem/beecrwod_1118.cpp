#include<bits/stdc++.h>
using namespace std;
int main(){

  int count=0;
  double sum=0;
  int flag=0;
  int term=0;

  while (count!=2)
  {
    double x; cin>>x;

    if (x==1)
    {
      cout<<"novo calculo (1-sim 2-nao)"<<endl;
      flag=0;
      sum=0;
      
    }
    else if (x==2)
    {
      cout<<"novo calculo (1-sim 2-nao)"<<endl;
      count=2;
      return 0;
    }
    else if (x>2 && x<=10)
    {
       sum+=x;
       flag+=1;
    }
    else
    {
      cout<<"nota invalida"<<endl;
    }


    if (flag==2)
    {
       double avg = sum/2;
       cout<<fixed<<setprecision(2)<<"media ="<<" "<<avg<<endl;
       
    }

    if (term==1)
    {
      if (x<1 || x>2) 
      {
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
      }
      
      
    }
    
    
    
    
    
    
    
    

  }
  


    
  


  return 0;
}