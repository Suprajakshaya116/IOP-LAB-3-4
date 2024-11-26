
#include <stdio.h>
int main() {
    int x,y,z,a,b,P,M;
    printf("enter your marks in maths out of 100 \n");
    scanf("%d",&x);
    printf("enter your marks in english out of 100\n");
    scanf("%d",&y);
    printf("enter your marks in physics out of 100  \n");
    scanf("%d",&z);
    printf("enter your marks in chemistry out of 100\n");
    scanf("%d",&a);
    printf("enter your marks in science out of 100\n");
    scanf("%d",&b);
    M=x+y+z+a+b;
    printf("the total marks you have  secured is %d \n",M);
    P= (M)/5;
    printf("division= %d",P);
    return 0;
}