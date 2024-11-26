#include <stdio.h>
/*87) WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500
(PASSING ARRAY OF STRUCTURE INTO FUNCTION).*/
struct student {
    char Name[50];
    int roll_no;
    int marks;
} s[10];
int fun() {
    int i,max=0;
    printf("Enter information of students:\n");
    // storing information
    for (i=0;i<10; ++i) {
        s[i].roll_no = i + 1;
        printf("\nFor roll number %d\n", s[i].roll_no);
        printf("Enter name: ");
        scanf("%s", s[i].Name);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
}
    int main(){
    fun();
    printf("\nstudents qualified in exam are ..\n\n");
    for ( int i=0;i<10; ++i)
    {
     if((s[i].marks)>500)
     printf("roll_no:%d \n name: %s \n marks: %d \n\n",s[i].roll_no,s[i].Name,s[i].marks);
     }
 }
    