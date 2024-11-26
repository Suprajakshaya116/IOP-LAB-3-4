#include<stdio.h>

int main()
 { 
   //simple calculator using switch case 
   float a,b;
   char A;
   printf("enter any one  operator ( +,*,/,-) \n");
   scanf("%c",&A);
   // entering 'a' and 'b'
   printf("enter a and b \n");
   scanf("%f%f",&a,&b);
   switch(A)
   { 
     //addition
     case '+' :
     printf("%f+%f=%f\n",a,b,a+b);
     break;
     //subtracion
     case '-' :
     printf("%f-%f=%f \n",a,b,a-b);
     break ;
     //multiplication
     case '*' :
     printf("%f*%f=%f \n",a,b,a*b);
     break;
     //division
     case '/':
     printf("%f/%f=%f\n",a,b,a/b);
     
   }
   return 0;
 }