#include<stdio.h>
// 109). MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
//  INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO MODIFY)
int main()
{
    int a=10;
    int *p =&a;
    printf("before changing a= %d\n",a);
    * p=20;
    printf("after changing a= %d\n",a);
    return 0;
}