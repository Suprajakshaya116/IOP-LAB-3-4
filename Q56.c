#include<stdio.h>
int main()

 {
   // to print no.of positive, negative numbers and zeros in array
 
  int arr[10],i,a=0,b=0,c=0;
  
  for(i=0;i<10;i++)
  
   {
      printf("enter an integer =  ");
      scanf("%d",&arr[i]);
   }
   
   for(i=0;i<10;i++)
   
   {
   
   if(arr[i]>0)//if positive then a is increased
   a++;
   
   else if(arr[i]<0)//if negative then b is increased
   b++;
   
   else //if zero is entered then c increased
   c++;
   
   }
   
     printf("no. of positive integers=%d \n no.of negative integers=%d \n ",a,b);
     printf("no.of zeroes=%d",c);
     
     return 0;
 }