#include<stdio.h>
int main()
{ 
  int a,i;
  printf("enter which table you want to print \n");
  scanf("%d",&a);
  for(i=1;i<=10;i++)
  {
     printf("%d*%d=%d \n ",a,i,a*i);
  }
     return 0;
}