#include<stdio.h>
#include<math.h>
int main()
{ 
   int x,n;
   float y;
   printf("enter value of x,n  \n");
   scanf("%d%d",&x,&n);
   if(n==1)
   {
      y=1+x;
   }
   else if(n==2)
   {
      y=1+x/n;
      }
   else if(n==3)
   {
      y=1+pow(x,n);
      }
      else if(n>3 || n<1)
      {
      y=1+n*x;
      }
      printf("y=%f",y);
     return 0;
}