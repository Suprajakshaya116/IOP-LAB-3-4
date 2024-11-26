#include<stdio.h>
int main()
 {
 /*program to print
enter n : 5
A
BB
CCC
DDDD
EEEEE
*/
  int n,i,j;
  printf("enter n : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
       printf("%c",(char)(64+i));
       }
      printf("\n");
   }
     return 0;
 }