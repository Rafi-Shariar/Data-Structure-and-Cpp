#include<stdio.h>
int main(){

  int t; scanf("%d",&t);

  while (t!=0)
  {
    int r1,r2; scanf("%d %d",&r1,&r2);

     r1=3.1416*(r1*r1);
     r2=3.1416*(r2*r2);

     int r3 = r1+r2;

     for (int i = 1;; i++)
     {
      int req = 3.1416*(i*i);
       if (req>r3)
       {
        printf("%d\n",i);
        break;
       }
       
     }
     

    t--;
  }
  

  return 0;
}