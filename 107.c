#include <stdio.h>
// 107). IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS LAST N DIGITS
// FOR EXAMPLE FLIP(123, 2)=132; (HERE N=2) FLIP(12345,3)=12543 (HERE N=3).

int flip(int num, int n)
{
    int count = 0, p = 1, sum = 0;
    int r;
    while (count != n)
    { // removing last n digits from num and finding reverse of last n digits
        r = num % 10;
        sum = r + sum * 10;
        num /= 10;
        count++;
    }
    count = 0;
    // caculating pow(10,n)
    while (count != n)
    {
        p *= 10;
        count++;
    }
    // attaching reverse part to num
    int a = (num * p) + sum;
    return a;
}
int main()
{
    int num, n;
    printf("enter the number \n");
    scanf("%d", &num);
    printf("how many digits you want to flip from last?\n");
    scanf("%d", &n);
    int update = flip(num, n);
    printf("%d", update);
    return 0;
}