#include<stdio.h>
//74) Given are one dimensional arrays A and B which are sorted in ascending order.
// Write a program to merge them into single sorted array C,that contains every  item form array A and B, in ascend sorted array C 

 int main(){
int A[]={1,5,7,3,4};
int a[]={9,6,5};//a =array B
int arr[8];//arr=C , stores elements of A and a
for(int i=0;i<8;i++)
{ 
   if(i<5)
   arr[i]=A[i];//stores elements of A
   else  
   arr[i]=a[i-5];
   //stores elements of a,since index of a starts from 0 ,so we have assingned it i-5
   }
   // printing array A
  printf(" A[]={");
   for(int i=0;i<5;i++)
   {
    printf("%d",A[i]);
    if(i<4)
    printf(",");
   }
  printf("}");
  //printing array a
  printf("\n B[]={");
 for(int i=0;i<3;i++)
   {
    printf("%d",a[i]);
    if(i<2)
    printf(",");
   }
  printf("}");
 //printing array C
   printf(" \n C[]={");
   for(int i=0;i<8;i++)
   {
    printf("%d",arr[i]);
    if(i<7)
    printf(",");
   }
  printf("}");
  // program to sort elements in array C
  int min_index,temp,i,j,n=8;
  for(i=0;i<n-1;i++)
   {
     min_index=i;//assuming index i is minimum 
     for(j=i+1;j<n;j++)
        {
           if(arr[j]<arr[min_index])
            {
            //swaping min numberto i th position
             temp=arr[j];
             arr[j]=arr[min_index];
            arr[min_index]=temp;
            }
        }
        
    }
   printf("\n \nThe sorted array is \n");
   printf("arr[]={");
   for(i=0;i<n;i++)
   {
       printf("%d",arr[i]);
       if(i<n-1)
       printf(",");
   }
   printf("} \n");
  return 0;
  }
  