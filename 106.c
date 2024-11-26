#include<stdio.h>
// 106). CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM NAME, QUANTITY, PRICE AND AMOUNT. 
// IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM NAME, QUANTITY AND PRICE AS INPUT
//  AND CALCULATE AMOUNT QUANTITY PRICE AND PRINT THE SAME AS OUTPUT.
struct item{
    char name[20];
    float quantity;
    float price;
}st;
float cost(struct item st)
{
    float amount=(st.quantity)*(st.price);
    return amount;
}
int main()
{
     printf("enter item name\n");
     fgets(st.name,20, stdin);
     printf("enter quantity in kg  \n");
     scanf("%f",&st.quantity);
     printf("enter price of item for 1kg \n");
     scanf("%f",&st.price);
    float p=cost(st); 
    printf("The amount to be paid is %0.2f Rupees",p);
    return 0;
}