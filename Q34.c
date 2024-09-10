#include<stdio.h>
int main() 
{ 
  // program to print fibonacci series
   int sum=0,a,b,n,x,y;
   printf("enter n = \n");
   scanf("%d",&n);
   a=0,b=1;
   x=a,y=b;
   printf("0,1,");//these two numbers are default in fibonacci series
   while(sum<=n)
   {
    //each number is equal lo sum of preceding two numbers 
     sum=a+b;
     a=b;
     b=sum;
   printf("%d,",sum);
   }
   return 0;
}