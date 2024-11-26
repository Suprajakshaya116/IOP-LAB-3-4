#include<stdio.h>
int main()
 {
   char c,y;
   printf("enter character : \n");
   scanf("%c",&c);
   y= (c>= 'a')?( (c<='z') ? (printf("it is small Case letter ")) :printf("it is not a small case letter ")):printf("it is not a small case letter");
   return 0;
 }