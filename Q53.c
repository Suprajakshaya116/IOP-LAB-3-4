#include<stdio.h>
// program to print diamond
int main()
 {
  int n;
   printf("enter num of rows: ");
   scanf("%d",&n);
   
   for(int i=1;i<=n; i++)
   {
   for( int k =1;k<=n-i;k++)
      {
       printf(" ");//prints n-i spaces for each row
       }
      for( int j=1;j<=2*i-1;j++)
      {
       printf("*");//prints stars
        }
        printf("\n");
        }
   for(int i=1;i<=n-1; i++)//Now reverse diamond prints with n-1 rows
       {
      for( int k =1;k<=i;k++)
       {
       printf(" ");
       }
      for( int j=1;j<=2*(n-i)-1;j++)
       {
       printf("*");//prints j stars for ith rows 
       }
        printf("\n");
       }
        
             return 0;
 }