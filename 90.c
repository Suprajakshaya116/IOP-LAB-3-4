#include<stdio.h>
//90) WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS
int main()
{
    char str[100];int l=0;
    printf("please enter te string \n");
    scanf("%[^\n]s",str);
    char *p=str;
    for (int i = 0;*(p+i)!='\0' ; i++)
    {
        l++;
    }
printf("the length of string with spaces  is %d \n",l);
for (int i = 0;*p!='\0' ; i++)
    {
        if(*p==' ')
            l--;
        p++;
    }
    printf("the length of string without counting spaces  is %d",l);
    return 0;
}