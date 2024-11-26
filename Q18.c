#include <stdio.h>
int main() 
 {
    int x,y,z,max;
    printf("enter x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    max= (x>y&& x>z) ? x :( (y>z)?y:z);
    printf("max=%d",max);
    return 0;
 }