#include<stdio.h>
int main()
{ 
   //program to print singlE digit ans shoeing sum of digits of n
   int original,r, sum=0,n;
   printf("enter a no. \n");
   scanf("%d",&n);
   original=n;
   while(n!=0)
       { 
       //removing last digit of n
       r=n%10;
       //finding sum of digits
       sum+=r;
       n=n/10;
       }
       printf("%d is sum of digits of %d",sum,original);
       
   
       return 0;
}