#include <stdio.h>
int main() 
{
    //to calculate cut off mrks of a student
    int M,P,C,E,CM;
    printf("enter marks of student in Mathematics out of 200\n");
    scanf("%d",&M);
    printf("enter marks of student in physics out of 200\n");
    scanf("%d",&P);
    printf("enter marks of student in chemistry out of 200\n");
    scanf("%d",&C);
    printf("enter marks of student in English out of 100 \n");
    scanf("%d",&E);
    CM=M/2+P/2+C/2+E;
    printf("Cut off marks=%d",CM);
    return 0;
}