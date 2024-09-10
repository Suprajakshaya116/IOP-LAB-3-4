#include<stdio.h>

int main()
 {
     // program to print 1/1!+2/2!+3/3!+....n
     int i,n;
     //reading n
     printf("enter n: \n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          printf("%d/%d!+",i,i);
      }    
     return 0;
    }