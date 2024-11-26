#include<stdio.h>
//93) WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
int main()
{
    char str[100];int l=0;
    printf("please enter te string \n");
    scanf("%[^\n]s",str);
    char *p=str;
    for (int i = 0;*(p+i)!='\0' ; i++)
    {
        if(*(p+i)==' ')
        l++;
    }
    printf("the num of words is %d",l+1);
    return 0;
}