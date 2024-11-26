#include<stdio.h>
int main()
{
     //multiplication of two matrices
    int a[3][3],b[3][3],c[3][3]={{0,0,0} ,{0,0,0},{0,0,0}};
    printf("enter elements of matrix 1\n");
    for (int i = 0; i < 3; i++)
{
     scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
}
printf("enter elements of matrix 2\n");
for (int i = 0; i < 3; i++)
{
     scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);
}
for (int i = 0; i < 3; i++)
{
     for (int j = 0; j <3; j++)
     {
          for (int k = 0; k <3; k++)
          {
             c[i][j]+=a[i][k]*b[k][j];
          }
          
     }
}
printf("the product of two matrices is \n");
for (int i = 0; i < 3; i++)
{
     printf("%d  %d  %d\n",c[i][0],c[i][1],c[i][2]);
}
    return 0;
}