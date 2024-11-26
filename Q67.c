#include<stdio.h>

int main()

 {
   //program to read 3x3 matrices and subtract them
   int i,j,arr1[3][3],arr2[3][3],subtracion[3][3];
   
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
   
   for(i=0;i<3;i++)// storing their Difference in third matrix
    {
      for(j=0;j<3;j++)
      {
        subtracion[i][j]=arr1[i][j]-arr2[i][j];
      }
    }
         
   printf(" \n The subtracion of two matrices  A-B is\n");
 
   for(i=0;i<3;i++)//printing Difference of matrices
   {
      for(j=0;j<3;j++)
      {
         printf("%d ",subtracion[i][j]);
      }
      printf("\n");
   }
   
  return 0;
 }