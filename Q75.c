#include<stdio.h>

int main()

 {
 /* 
 75) The annual examination results of 10 students are tabulated as follows:

Roll No.

Subject1

Subject2

Subject3

Write a program to read the data and determine the following:

(a) Total marks obtained by each student.

(b) The highest marks in each subject and the Roll No. of the student who secured it.

(c) The student who obtained the highest total marks.
*/
   int max1=0,roll_no[10],sub1[10],sub2[10],sub3[10],total[10];
   int max2=0,max3=0,s1=0,s2=0,s3=0,s4=0,max=0;
   for(int i=0;i<10;i++)
   {
     printf("enter details of roll no %d \n",i+1);
     printf("Enter marks secured in subject 1 : " );
     scanf("%d",&sub1[i]);
     printf("Enter marks secured in subject 2 : " );
     scanf("%d",&sub2[i]);
     printf("Enter marks secured in subject 3 : " );
     scanf("%d",&sub3[i]);
    }
    for(int i=0;i<10;i++)
    {
     total[i]=sub1[i]+sub2[i]+sub3[i];
      printf("total marks of roll no. %d i= %d \n",i+1,total[i]);
    }
    for(int i=0;i<10;i++)
    {
      if(max1<sub1[i])
      {
      max1=sub1[i];
      s1=i;
      }
      if(max2<sub2[i]){
      max2=sub2[i];
      s2=i;
      }
      if(max3<sub3[i]){
      max3=sub3[i];
      s3=i;
      }
      if(max<total[i]){
      max=total[i];
      s4=i;
      }
      }
      printf("Highest marks in subject 1 = %d and secured by roll no. %d\n",max1,s1+1);
      printf("Highest marks in subject 2 = %d and secured by roll no. %d\n",max2,s2+1);
      printf("Highest marks in subject 3 = %d and secured by roll no. %d\n",max3,s3+1);
      printf("Highest marks in class= %d and secured by roll no. %d\n",max,s4+1);
      
  return 0;
  
 }