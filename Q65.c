#include<stdio.h>

int main()

 {
 
   //program to read 3x3 matrix and print transpose of given matrix
   int i,j,sum=0,arr[3][3],trans[3][3];
   
   printf("enter elements of matrix \n");
   
   for(i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
    {
     printf("enter %d th row and %d th column element \n",i+1,j+1);
     scanf("%d",&arr[i][j]);
    }
  }
  
  // printing matrix
 printf("\nyour 3×3 matrix is \n");
 
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d ",arr[i][j]);
      }
      printf("\n");
   }
   
   // If A is given matrix and A' is transpose of A then A[i][j]=A'[j][i]
   
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        trans[i][j]=arr[j][i];
      }
    }
         
   // printing transpose of given matrix
   printf(" \nThe transpose of given 3×3 matrix is \n");
 
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d ",trans[i][j]);
      }
      printf("\n");
   }
   
  return 0;
 }