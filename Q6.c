#include <stdio.h>
int main()
//swaping of two variable without third variable 
 {
    int a,b;
    printf("enter a and b \n");
    scanf("%d%d",&a,&b);
    //let a=5,b=10
    a=a*b ;//a=50
    b=a/b; //b=5
    a=a/b; //a=10
    printf("after swaping  a=%d,b=%d",a,b);
    return 0;
}