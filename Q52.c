#include<stdio.h>
int main()
 {
 /*program to print pattern 
          1
         121
        12321
       1234321
 */
 
  int n,i,k,j,a;
  printf("enter n : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
       for(a=1;a<=n-i;a++)
       {
         printf(" ");
       }
       for(j=1;j<=2*i-1;j++)
       {
         if(j<=i)
         printf("%d",j);
       }
       if(j>i);
       {
         for(k=i-1;k<i&&k>0;k--)
         {
         printf("%d",k);
         }
       }
   
      printf("\n");
  }
     return 0;
 }