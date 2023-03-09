#include<stdio.h>
#include<string.h>
int main(){

   int q = 1;
   int count=0;

   while (q!=0)
   {
     q/=10;

     count++;

   }

   printf("\n\n%d",count);


   



    return 0;
}