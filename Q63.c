#include<stdio.h>

int main()

 {
  //63) PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.
   int i,j,max,min,arr[3][3];
   max=0,min=9999999;
   
   printf("enter elements of aaray \n");
  for(i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
    {
     printf("enter %d th row and %d th column number \n",i+1,j+1);
     scanf("%d",&arr[i][j]);
    }
  }
 
   
   for(i=1;i<=3;i++)
   {
      for(j=1;j<4;j++)
      {
        if(max<arr[i][j])
        max=arr[i][j];
        if(min>arr[i][j])
        min=arr[i][j];
   }}
 printf("your 3×3 matrix is \n");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d ",arr[i][j]);
         }
         printf("\n");
         }
  printf("max=%d,min=%d",max,min);
   

   return 0;
 }