#include<stdio.h>
 #include<string.h>
 //94).WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS
 // FOR EXAMPLE, ST="SVNITJAVA" IS COPIED AS "AVAJTINVS"
 void reverse(char*str)
{
    int n=strlen(str);
    char rev[n];
    for(int i=0;i<n;i++)
    {
     rev[i]=str[n-i-1];
    }
   printf("%s",rev);
}
int main()
{
    char string[100];
    printf("enter any string \n");
    scanf("%[^\n]s",string);
    reverse(string);
}