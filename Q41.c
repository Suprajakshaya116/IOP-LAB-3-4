#include<stdio.h>
int main()
{
   //finding factors of a number
   int i,n;
   printf("enter any positive number : \n");
   scanf("%d",&n);
   printf("factors of %d= ",n);
   for(i=1;i<=n;i++)
   {
    if(n%i==0)//factors on division ,leaves remainder 0
    printf("%d,",i);
    }
     return 0;
 }
