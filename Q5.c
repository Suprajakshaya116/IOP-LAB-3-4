
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b \n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swaping the new values of a, b are %d,%d \n",a,b);
    return 0;
}