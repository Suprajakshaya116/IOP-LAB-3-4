#include<stdio.h>

int main()

 {
 
   //program to read 3x3 matrix and print sum of all rows
   int i,j,sum=0,arr[3][3];
   
   printf("enter elements of aaray \n");
   
   for(i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
    {
     printf("enter %d th row and %d th column number \n",i+1,j+1);
     scanf("%d",&arr[i][j]);
    }
  }
  
  // printing matrix
 printf("your 3×3 matrix is \n");
 
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d ",arr[i][j]);
      }
      printf("\n");
   }
   
   
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
      //sum of elements of each  rows
       sum=sum+arr[i][j];
      }
      printf(" sum of elements of row %d =%d \n ",i+1,sum);
      sum=0;//for every row sum will start from 0
    }
    
  return 0;
 }