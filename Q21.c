#include<stdio.h>

int main()
 {
   float a,b;
   char A;
   //performing arithmetic operation
   printf("enter any one  arithmetic operator +,*,/,- \n");
   scanf("%c",&A);
   // entering 'a' and 'b'
   printf("enter a and b \n");
   scanf("%f%f",&a,&b);
   switch(A)
   { 
     //addition
     case '+' :
     printf("a+b=%f\n",a+b);
     break;
     //subtracion
     case '-' :
     printf("a-b=%f \n",a-b);
     printf("b-a=%f \n",b-a);
     break ;
     //multiplication
     case '*' :
     printf("a*b=%f \n",a*b);
     break;
     //division
     case '/':
     printf("a/b=%f\n",a/b);
     printf("b/a=%f \n",b/a);
     
   }
   return 0;
 }