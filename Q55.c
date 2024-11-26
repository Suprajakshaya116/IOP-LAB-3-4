#include<stdio.h>
int main()

 {
   //aaray to print no.of even and odd numbers
 
  int arr[10],i,a=0,b=0;
  
  for(i=0;i<10;i++)
  
   {
      printf("enter an integer =  ");
      scanf("%d",&arr[i]);
   }
   
   for(i=0;i<10;i++)
   
   {
   
   if(arr[i]%2==0)
   a++;
   else
   b++;
   
   }
   
     printf("no. of odd integers=%d \n no.of even integers=%d",b,a);
     
     return 0;
 }