#include <stdio.h>

int main()
{
    // sorting elements of array using bubble sort
    int n;
    printf("enter size of array \n");
    scanf("%d", &n);
    int a[n];
    printf("enter elements of array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int temp, n1 = n;
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n1 - 1; i++)
        {
            if (a[i] > a[i + 1]) // if ith ele is bigger than its next element we need to swap
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
            /* by this larger num reaches last position
            if a[={3,2,1,0},n=4
            pass1= 2 1 0 | 3
            pass2= 1 0 | 2 3
            pass3= 0 | 1 2 3; num of paases =n-1
            for each pass we  we shld not include setteled numbers
            so, every tym n1-1 element is settled
            and n1=n1-1;not taking settled ele in loop  */
        }
        n1--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}