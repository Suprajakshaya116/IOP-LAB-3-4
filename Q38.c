#include<stdio.h>

int main()
 {   // program to print squares of all  natural num till n
     int a,i,n;
     printf("enter n: \n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     { 
          a=i*i;
          printf("%d,",a);
      }    
      return 0;
      }