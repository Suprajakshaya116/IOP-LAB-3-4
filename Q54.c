#include<stdio.h>
int main()

 {
   //sum of 10 integers using aaray
 
  int arr[10],i,sum=0;
  
  for(i=0;i<10;i++)
  
   {
      printf("enter an integer= \n");
      scanf("%d",&arr[i]);
      sum+=arr[i];
   }
     printf("sum of 10 integers =%d",sum);
     return 0;
 }