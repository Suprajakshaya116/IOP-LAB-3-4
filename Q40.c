#include<stdio.h>
int main()
{
   int i, sum;
   do
   {
   //reads all the numbers 
   printf("enter a number:  \n ");
   scanf("%d",&i);
   sum=sum+i;
   }
   while(i>=0);// if we enter negative number it will come out of loop
   printf("sum of all the numbers u entered =%d",sum);
   return 0;
 }