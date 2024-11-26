# include<stdio.h>
int main()
{
    //to calculate gross salary
    int x,y,z,a,b,G;
    printf("enter basic salary \n ");
    scanf("%d",&x);
    printf("enter house rent \n");
    scanf("%d",&y);
    printf("enter transport allowence \n");
    scanf("%d",&z);
    printf("enter income tax \n");
    scanf("%d",&a);
    printf("enter provident fund \n");
    scanf("%d",&b);
    G=x+y+z+a+b;
    printf("the gross salary is %d",G);
    
    
    return 0;
}