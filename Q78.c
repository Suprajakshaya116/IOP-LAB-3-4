#include<stdio.h>
//to check given number is armstrong number or not
void armstrong(int n){
 int sum=0,a,b=0,r;
 int original=n;//storing n
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
}
int main ()
{
  int num;
  printf ("enter number:");
  scanf("%d",&num);
  armstrong(num);
    return 0;
}