
#include<stdio.h>
int main()
{
    //linear search on array
    int n,found=0,num=5,arr[]={5,52,77,2,7};
    printf("enter any number <100  which you would like to search in array\n");
     scanf("%d",&n);   
     for (int i = 0; i <num; i++)
     {
         if(arr[i]==n)
         {
         found++;// if number is found it counts and exits loop
         printf("your number is found in array");break;
 }}
      if(found==0)//number is not found 
      printf("sorry,your number is not found in array");
      printf("\nThe array is \n");
      for (int i = 0; i <num; i++)
      printf("%d ",arr[i]);
    return 0;
}