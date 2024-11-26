#include<stdio.h>
int main()
{
    int n,original,d=0,count=0;
    printf("enter the number \n");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        d++;
        n/=10;
    }
    n=original;
    int r=0,a[d];
     for(int i=0; n!=0 ;i++)    
    {
        r=n%10;
        a[i]=r;
        if(original%a[i]==0)
        count++;
        n/=10; 
    }
     printf("%d",count);
    
}