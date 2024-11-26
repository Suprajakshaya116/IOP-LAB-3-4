#include<stdio.h>
int main()

 {
 /* program to print
 if n : 5
    1
   12
  123
 1234
12345
 */
  int n,i,j,k;
  printf("enter n : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
       for(k=1;k<=n-i;k++)
       {
       printf(" ");
       }
       for(j=1;j<=i;j++)
       {
       printf("%d",j);
       }
      printf("\n");
   }
     return 0;
 }