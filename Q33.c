#include<stdio.h>
int main()
 {
 // to print max no. and min no. from n numbers
   int i,max=0,x,min=999999,n;
   printf("enter no. of numbers n: \n");
   scanf("%d",&n);
    for(i=1;i<=n;i++)//to enter numbers n times 
    {
    printf("enter no. \n");
    scanf("%d",&x);
    if(max<x)//if x is greater, it is stored in max
    max=x;
    if(min>x)//if x is smaller, it is stored in min
    min=x;
    }
    printf(" max=%d,min=%d",max,min);
    return 0;
 }