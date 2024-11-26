#include<stdio.h>
int main()
 {
 // to print max no. and second max no. from n numbers
   int i,n,arr[n],max1,max2;
   printf("enter n \n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   printf("enter numbers \n");
   scanf("%d",&arr[i]);
   }
   max1=0;
   for(i=0;i<n;i++)
   {
   if(max1<arr[i])//checking for every element
   max1=arr[i];
   }
   max2=0;
   for(i=0;i<n;i++)
   {
   if(max1>arr[i]&&max2<arr[i])//greater among all but less than max number
   max2=arr[i];
   }
     printf(" max1=%d,max2=%d",max1,max2);
     return 0;
 }