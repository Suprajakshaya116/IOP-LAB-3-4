#include <stdio.h>
//95)WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE
// DECLARE A STRUCTURE POINTER AND AN ARRAY EMPLOY WITH 50 ELEMENTS 
//THE PROGRAM SHOULD READ 'N' EMPLOYEE DETAILS AND PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.
#define n 50 //n=number of employees
struct employee
{
    char id[10];
    char name[20];
    int pay;
} emp[n];
int main()
{
    struct employee *p;
    p = emp;
    for (int i = 0; i < n; i++)
    {
        printf("enter emp:%d id \n", i + 1);
        scanf("%s", &p[i].id);
        printf("enter emp:%d name \n", i + 1);
        scanf("%s", &p[i].name);
        printf("enter emp:%d basic pay \n", i + 1);
        scanf("%d", &p[i].pay);
    }

    for (int i = 0; i < n; i++)
    {

        printf("\nuID:%s \n", p[i].id);
        printf("NAME:%s \n", p[i].name);
        printf("BASIC PAY:%d/- \n", p[i].pay);
    }
    return 0;
}