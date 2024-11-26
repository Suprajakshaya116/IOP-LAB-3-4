#include <stdio.h>
int main() 
{
    //program to read time in hrs,min,seconds and convert it into seconds
    float H,M,S,Seconds;
    //time in hours
    printf("Enter time in hours \n");
    scanf("%f",&H);
    //time in minutes
    printf(" Enter time in minutes \n");
    scanf("%f",&M);
    //time in seconds
    printf("Enter time in seconds \n");
    scanf("%f",&S);
    Seconds=(3600*H)+(60*M)+S;
    printf("The total time  is %f Seconds ",Seconds);
    return 0;
}