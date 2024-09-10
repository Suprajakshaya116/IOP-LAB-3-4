#include<stdio.h>
int main()
 {
   //program to check whether a number is prime or not
   int i,n,a=0;
   printf(" enter n \n");
   scanf("%d",&n);
   if(n==1)
   printf("1 is neither prime nor composite number \n");
   else 
   {
     for(i=1;i<=n;i++)
     {
       if(n%i==0)//i becomes factor of n
        a++;//a= number of factors 
     }
      if(a==2)// prime number has only two factors 1 and itself 
      printf("%d is  prime number \n",n);
      else 
      printf(" %d is composite number \n",n);
   }
   return 0;
 }