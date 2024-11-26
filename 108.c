#include <stdio.h>
// 108). WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE:

// A. COPY ONE STRING INTO ANOTHER

// B. COMPARE TWO STRINGS

// C. CONCAT TWO STRINGS

// D. REVERSE A GIVEN STRING
int main()
{
    char s1[20], s2[20], cpy[20], cat[40], reverse[20];
    int i, len = 0, cmp = 0;
    printf("enter two strings\n");
    gets(s1);
    gets(s2);

    // copying one string to other
    for (i = 0; s2[i] != '\0'; i++)
    {
        cpy[i] = s2[i];
    }
    cpy[i] = '\0';
    printf("the second string is copied to new string : cpy[]=\"%s\"\n", cpy);

    // finding length os string 1
    for (i = 0; s1[i] != '\0'; i++)
    {
        len++;
    }

    // concating two strings
    for (i = 0;; i++)
    {
        if (s1[i] == '\0')
            break;
        cat[i] = s1[i];
    }
    for (; s2[i - len] != '\0'; i++)
    {

        cat[i] = s2[i - len];
    }
    cat[i] = '\0';
    printf("the two strings are concated : concat[]= %s \n", cat);

    // comparing two strings
    for (int i = 0;; i++)
    {
        if (s1[i] != s2[i])
        {
            cmp = s1[i] - s2[i];
            break;
        }

        else if (s1[i] == '\0' && s2[i] == '\0')
        {
            cmp = 0;
            break;
        }
    }
    printf("after comparing the difference between two strings is %d\n", cmp);

    //reversing a string
    for (int i = 0; i <len; i++)
    {
         reverse[i]=s1[len-i-1];
    }
    reverse[i]='\0';
    printf("reverse of string 1  is %s",reverse);

    return 0;
}