// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // to calculate simple interest 
    int p,t,r,intrest;
    printf("enter p , t, r values \n");
    scanf("%d",&p);
    scanf("%d",&t);
    scanf("%d",&r);
    intrest=p*t*r/100;
    printf("intrest=%d",intrest);
    return 0;
}