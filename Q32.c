#include<stdio.h>
int main()
 {
 // to print max no. and second max no. from n numbers
   int i,n,arr[n],max,max2;
   printf("enter n \n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   printf("enter numbers \n");
   scanf("%d",&arr[i]);
   }
   max=0;
   for(i=0;i<n;i++)
   {
   if(max<arr[i])//checking for every element
   max=arr[i];
   }
   max2=0;
   for(i=0;i<n;i++)
   {
   if(max>arr[i]&&max2<arr[i])//greater among all but less than max number
   max2=arr[i];
   }
     printf(" max=%d,max2=%d",max,max2);
     return 0;
 }