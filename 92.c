#include<stdio.h>
//92) WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
int main()
{
    int n,m=0;
    printf("how many integers u want to enter \n");
    scanf("%d",&n);
    int a[n];
    printf("enter numbers \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int *p=a;
    for (int i = 0; i <n; i++)
    {
        if(m<*(p+i))
        m=*(p+i);
    }
    printf("the biggest of all numbers is %d",m);
    return 0;
}