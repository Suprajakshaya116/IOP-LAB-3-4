#include<stdio.h>
#include<string.h>
//97) WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.
int main()
{
    int n=0;
    char vowels[]="aeiouAEIOU";
    char str[100];
    printf("enter string \n");
    gets(str);
    char *p=str;
    for (int i = 0; i < strlen(str); i++)
    {
         for (int j = 0; j<10; j++)
         {
            // linear search on given string
             if (*(p+i)==vowels[j])
             {
                 n++;//counts number of vowels
             }
             
         }
         
    }
    printf("Number of vowels in given string is %d",n);
    
    return 0;
}