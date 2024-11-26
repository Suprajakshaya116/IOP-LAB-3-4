#include<stdio.h>
int main()
 {
 //105) WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS
 char str[]="ABCD";
 for(int i=0;i<4;i++)
 {
  for(int j=0;j<4;j++)
  {
   if(i!=j)
   {
    for(int k=0;k<4;k++)
    {
     if(j!=k && i!=k)
    for(int l=0;l<4;l++)
     if(i!=l && j!=l && k!=l)
      {
       printf("%c%c%c%c\n",str[i],str[j],str[k],str[l]);
       }}}}}
     return 0;
 }