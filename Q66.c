#include<stdio.h>

int main()

 {
 
   //program to read 3x3 matrices and add them
   int i,j,arr1[3][3],arr2[3][3],sum[3][3];
   
   printf("enter elements of 1st matrix \n");
   
   for(i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
    {
     printf("enter %d th row and %d th column element \n",i+1,j+1);
     scanf("%d",&arr1[i][j]);
    }
 }
 printf("\nenter elements of 2nd  matrix \n");
   
 
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
        printf("enter %d th row and %d th column element \n",i+1,j+1);
         scanf("%d",&arr2[i][j]);
      }
      printf("\n");
   }
   
   printf(" \n The Matrix A is \n");// printing 1st matrix
 
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d ",arr1[i][j]);
      }
      printf("\n");
   }
  
  printf(" \n The Matrix B is \n");//printing second matrix
 
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d ",arr2[i][j]);
      }
      printf("\n");
   }
   
   for(i=0;i<3;i++)// skoring sum in third matrix
    {
      for(j=0;j<3;j++)
      {
        sum[i][j]=arr1[i][j]+arr2[i][j];
      }
    }
         
   printf(" \n The sum of two matrices A+B is\n");
 
   for(i=0;i<3;i++)//printing sum of matrices
   {
      for(j=0;j<3;j++)
      {
         printf("%d ",sum[i][j]);
      }
      printf("\n");
   }
   
  return 0;
 }