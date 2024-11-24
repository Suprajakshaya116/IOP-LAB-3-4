#include<stdio.h>
#include<math.h>
int main()
{ 
    int a,b=0,sum=0,original,r,n;
   printf("enter no. \n");
   scanf("%d",&n);
   original=n;
   while(original!=0)
     {
      a=original %10;
      b++;// counting num of digits in a number
      original/=10;
      }
      original=n;
      for(int i=0;n!=0;i++)
       {
        r=n%10;
        sum+=pow(r,b);
        n/=10;
        }
      if(original==sum)
        printf("%d is an armstrong no. " ,original);
        else
       printf("%d is not armstrong no. " ,original);
      return 0;
}
