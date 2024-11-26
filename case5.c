#include <stdio.h>
int main() {
   int  k[47],a=0,b=1,sum=0;
    for(int i=0;i<47;i++) // an int data type can store upto 47th fibonacci number
    {
     a=b;b=sum;
     k[i]=sum;//storing all fibo numbers in array
     sum=a+b;
     }
     int n,count=0;
     printf("enter num of numbers \n");
     scanf("%d",&n);
     int arr[n];
     printf("enter numbers \n");//storing input 
     
     for(int i=0 ;i<n;i++)
       scanf("%d",&arr[i]);
       
     for(int i=0;i<n;i++)
      { 
        count=0;//for every input counts starts with zero
        //conducting linear search on array, to know whether input no. is matching with fibo no.
         for(int j=0;j<47;j++)
         {
           if(k[j]==arr[i])
           count++;//if it matches , it is counted
         }
         if(count>0) 
         printf("isfibo \n");
         else 
         printf("isnot fibo \n");
      }
    return 0;
}
