#include <stdio.h>

int main() {
     //converting seconds to days , hours ,minutes and seconds
    int d, h,m,s,sec;
    printf("enter time in seconds \n");
    scanf("%d",&s);
    d=s/86400;
    h=(s-(d*86400))/3600;
    m=(s-((h*3600)+(d*86400)))/60;
    sec=s-((h*3600)+(m*60)+(d*86400));
    printf("The total time is %d days %d hr %d min %d sec",d,h,m,sec);
    
    

    return 0;
}