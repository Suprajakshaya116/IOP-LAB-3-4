#include<stdio.h>
//86) WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING
int string()
{
char str[50];int a=0;//a=counts length of string
printf("ENTER A LINE OF TEXT....\n");
scanf("%[^\n]s", str);
int i=0;
while(str[i]!='\0')
{
 a++;
 i++;
}
return a;
}
int main()
{
int p=string();
printf("%d",p);
}