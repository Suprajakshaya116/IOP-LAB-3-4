#include <stdio.h>

int main()
{    
    //to calculate area of triangle
    float b,h,area;
    printf(" enter values of base and height of triangle \n");
    scanf("%f%f",&b,&h);
    area=b*h/2;
    printf("area of triangle =%f",area);

    return 0;
}