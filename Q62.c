#include<stdio.h>

int main()

 {
  // reversal of array 
   int i,n,arr1[n],arr2[n];
   printf("Enter size of array : \n");
   scanf("%d",&n);
   printf("enter elements of aaray \n");
   for(i=0;i<n;i++)
   {
     printf("enter number = \n");
     scanf("%d",&arr1[i]);
   }
 
   printf("arr1[]={");
   for(i=0;i<n;i++)
   {
      printf("%d",arr1[i]);
      if(i<n-1)
      printf(",");
   }
   printf("} \n");
   for(i=0;i<n;i++)
   {
     arr2[i]=arr1[n-i-1];
   }
     printf(" \n After reversal \n new array[]={");
   for(i=0;i<n;i++)
   {
     printf("%d",arr2[i]);
     if(i<n-1)
     printf(",");
   }
   printf("} \n");
   
   return 0;
 }