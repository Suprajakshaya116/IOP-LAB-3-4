#include <stdio.h>
int main() 
{
    float F,C;
    //entering temp in °F
    printf(" Enter temperature in °F \n");
    scanf("%f",&F);
    //converting temp to °C
    C=(F-32)/1.8;
    printf("The temp in °C is %f",C);
    return 0;
}
