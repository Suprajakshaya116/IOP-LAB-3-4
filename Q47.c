#include<stdio.h>
int main()
 {
 /*program to print
if n : 6
A
AB.               
ABC
ABCD
ABCDE
ABCDEF
*/
 
  int n,i; char j;
  printf("enter n : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
       for(j='A';j<('A'+i);j++)
       {
       printf("%c",j);
       }
      printf("\n");
   }
     return 0;
 }