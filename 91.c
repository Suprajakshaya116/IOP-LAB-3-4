#include <stdio.h>
//91]WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
int main()
{
    int n;
    printf("enter an integer \n");
    scanf("%d", &n);
    int *p = &n;
    printf(" square = %d \n", (*p) * (*p));
    printf(" cube = %d \n", (*p) * (*p) * (*p));

    return 0;
}