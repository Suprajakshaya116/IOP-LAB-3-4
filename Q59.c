#include<stdio.h>

int main()
ARRAYS INTO THIRD.

//59) PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS
 {
   int i,n,arr1[10],arr2[10],arr[10];
   printf("enter elements of first aaray \n");
   for(i=0;i<10;i++)
   {
   printf("enter number = \n");
   scanf("%d",&arr1[i]);
   }
   printf("enter elements of second aaray \n");
   for(i=0;i<10;i++)
   {
   printf("enter number : \n");
   scanf("%d",&arr2[i] );
   }
   printf(" \n The two arrays before swaping  \n \n");
   printf("arr1[]={");
   for(i=0;i<10;i++)
   {
   printf("%d",arr1[i]);
   if(i<9)
   printf(",");
   }
   printf("} \n");
   printf("arr2[]={");
   for(i=0;i<10;i++)
   {
   printf("%d",arr2[i]);
   if(i<9)
   printf(",");
   }
   printf("} \n");
   for(i=0;i<10;i++)
   {
     arr[i]=arr1[i];
     arr1[i]=arr2[i];
     arr2[i]=arr[i];
   }
   printf("\n \n The two arrays after swaping \n \n");
   printf("arr1[]={");
   for (i=0;i<10;i++)
   {
     printf("%d",arr1[i]);
     if(i<9)
     printf(",");
   }
    printf("} \n");
    printf("arr2[]={");
   for(i=0;i<10;i++)
   {
     printf("%d",arr2[i]);
     if(i<9)
     printf(",");
   }
   printf("} \n");
   return 0;
 }