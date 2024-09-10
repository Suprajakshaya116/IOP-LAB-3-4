#include<stdio.h>
int main()
 {  
    //program to print electricity bill 
    int u;//u=no.of units
    float ch;//ch=charges
    //reading no.of units consumed
    printf("Enter electricity consumption in unit = \n");
    scanf("%d",&u);
      if(0<=u && u<=200)
      ch=0.5*u;//₹0.5 Per unit
      else if(200<u && u<=400)
      ch=100 + ((0.65)*u);//₹100 plus ₹0.65  per unit
      else if(401<=u && u<=600)
      ch=230+(0.8*u);//₹230 plus ₹0.8 per unit
      else 
      ch=425+((1.25)*u);//for above 600 units = ₹425+ ₹1.25 per unit
      printf("the total amount to be paid  = %f",ch);//the total amount to be paid 
    return 0;
 }