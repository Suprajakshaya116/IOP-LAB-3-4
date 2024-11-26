#include<stdio.h>
int main()
 {
   char c,y;
   printf("enter character : \n");
   scanf("%c",&c);
   if(c>='a'&& c<='z')
   printf(" It is a small case lenter ");
   else if(c>'A' && c<='Z')
   printf("It is a capital letter ");
   else if(c>='0'&&c<='9')
   printf("It is a digit");
   else
   printf("It is a special symbol");
    return 0;
 }