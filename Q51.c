#include<stdio.h>
int main()
 {
 /*
  program to print 
 enter n : 5
10000
01000
00100
00010
00001
*/
 
  int n,i,j,k;
  printf("enter n : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       { 
       if(j==i)
       printf("1");
       else
       printf("0");
       }
      printf("\n");
   }
     return 0;
 }