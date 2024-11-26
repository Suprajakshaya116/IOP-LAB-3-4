#include <stdio.h>
int main() 
 {
    //program to read three numbers and print max using &&
    int x,y,z;
    printf("enter first number \n");
    scanf("%d",&x);
    printf("enter second number \n");
    scanf("%d",&y);
    printf("enter third number \n");
    scanf("%d",&z);
    if(x>y && x>z)
       printf("the max of three no.s is %d",x);
    if(y>z && y>x)
       printf("the max of three no.s is %d",y);
    else
    printf("the max of three no.s is %d",z);
    return 0;
 }