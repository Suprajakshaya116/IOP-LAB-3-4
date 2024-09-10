#include<stdio.h>
int main()
{ 
   int original, r,reverse=0,n;
   printf("enter a no. \n");
   scanf("%d",&n);
   original=n;
   while(n!=0)
       { 
       //removing last digit of n
       r=n%10;
       //finding reverse of that number
       reverse=reverse*10+r;
       n=n/10;
       }
       printf("%d is reverse of %d",reverse,original);
       
   
       return 0;
}