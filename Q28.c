#include<stdio.h>
#include<math.h>
int main()
{ 
   int a,b,c,n;
   printf("enter three digit no. \n");
   scanf("%d",&n);
        a=n/100;
        b=(n/10)-(a*10);
        c=n%10;
        if((a*a*a)+(b*b*b)+(c*c*c)==n)
        printf("%d is armstrong no. " ,n);
        else 
        printf("%d is not armstrong no. " ,n);
     return 0;
}