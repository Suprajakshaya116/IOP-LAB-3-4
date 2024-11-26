#include<stdio.h>
//89)WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY
 int main()
{
    int n;
    printf("enter n ");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int *p=a;
     for(int i=0;i<n;i++){
          b[i]=*(p+n-1-i); 
     }
     for(int i=0;i<n;i++){
         printf("%d ", b[i]);
         }
}       
    
    


