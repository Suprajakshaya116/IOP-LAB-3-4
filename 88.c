#include<stdio.h>
//88) WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
#define n 4
int main()
{
    int a[]={1,4,2,5},b[4];
    int *p=a;
     for(int i=0;i<n;i++){
          b[i]=*p;
          p++;
     }
     for(int i=0;i<n;i++)
         printf("%d ", b[i]);
}       
    
    

