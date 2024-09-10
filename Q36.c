#include<stdio.h>

int main()
 {
     int i,n;
     printf("enter n: \n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     { 
        if(i%2!=0)
         //odd numbers are not divisible by 2
         //printing odd numbers 
          printf("%d,",i);
      }    
      return 0;
      }