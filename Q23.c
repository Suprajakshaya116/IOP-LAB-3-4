#include<stdio.h>

int main()
 {
     // program to print power of number without <MATH.H> library 
     int i,a,b;
     long int p=1;
     //reading a and b
     printf("enter a,b: \n");
     scanf("%d%d",&a,&b);
     for(i=1;i<=b;i++)// power=b , so loop multiplies 'b' times a given number 
     {
       p=p*a;
       // if a=2,b=3 then p= 1*2*2*2
      }    
      printf("%d^%d=%ld ",a,b,p);
     return 0;
    }