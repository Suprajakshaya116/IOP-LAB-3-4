#include <stdio.h>
int main() {
    int n,i,j,sum=0,summ=0;
    printf("enter n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
           if(i%2 !=0)
           sum+=i;
       }
       printf("sum of all odd no. from 1 to %d =%d \n",n,sum);
    for (j=1;j<=n;j++)
    {
       if(j%2==0)
       summ+=j;
    }
       printf("sum of all even no. from 1 to %d =%d",n,summ);
    
    return 0;
}