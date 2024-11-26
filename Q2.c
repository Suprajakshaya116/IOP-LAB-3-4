
#include <stdio.h>
int main() {
    int x,y,z,a,b,P,M;
    printf("enter your marks in maths  \n");
    scanf("%d",&x);
    printf("enter your marks in english  \n");
    scanf("%d",&y);
    printf("enter your marks in physics  \n");
    scanf("%d",&z);
    printf("enter your marks in chemistry  \n");
    scanf("%d",&a);
    printf("enter your marks in science  \n");
    scanf("%d",&b);
    M=x+y+z+a+b;
    printf("the total marks you have  secured is %d \n",M);
    P= (M)/5;
    printf("Total percentage is %d",P);
    return 0;
}