#include <stdio.h>
int main()
{
int x,s,h,m,sec;
printf("enter time in seconds \n");
scanf("%d",&s);
// to convert seconds into time
h=s/3600;
m=(s-(3600*h))/60;
sec=s-((3600*h)+(m*60));
printf("the time is %d:%d:%d", h,m,sec);
return 0;
}

