#include<stdio.h>
int main()
 {
  // sorting array using Selection sort
   int i,n,arr[n],min_index,temp;
   printf("Enter size of array : \n");
   scanf("%d",&n);
   printf("enter elements of aaray \n");
   for(i=0;i<n;i++)
   {
     printf("enter number = \n");
     scanf("%d",&arr[i]);
   }
   printf("The unsorted array is  \n");
   printf("arr[]={");
   for(i=0;i<n;i++)
   {
    printf("%d",arr[i]);
    if(i<n-1)
    printf(",");
   }
  printf("}");
  for(i=0;i<n-1;i++)
   {
     min_index=i; // assuming i th element is minimum 
     for(int j=i+1;j<n;j++) //comparing ith indeks elements with i+1 to n index elements
        {
          if(arr[j]<arr[min_index])
            {
             temp=arr[j];// finding minimum and swaping 
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