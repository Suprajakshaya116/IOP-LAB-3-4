#include<stdio.h>
int main()
 {  
    //program to calculate commission of sales amount
    float s,c;//s=sales amount & c=commission 
    //reading sales amount 
    printf("Enter sales amount = \n");
    scanf("%f",&s);
      if(s<=500)
      c=s*5/100;//5% of sales amount 
      else if(500<s && s<=2000)
      c=35 + (s*10/100);//₹35 plus 10% of sales amount
      else if(2000<s && s<=5000)
      c=185+(s*12/100);//₹185 plus 12 % sales amount
      else 
      c=(s*12.5/100);//for above ₹5000 , commission =12.5% sales amount
      printf("the total commission= %f",c);
    return 0;
 }