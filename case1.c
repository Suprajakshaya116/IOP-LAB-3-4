#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t;int a,m;
    gets(s); 
    int n=strlen(s);
    char p[100];
    strcpy(p,s);
    for(int i=n-2;i>=0;i--)
     {  
        if(s[i]<s[i+1]) //if its true,we can swap the characters to increase value o
                
         {  
             a=i;
             m=i+1;//fixing s[i+1] as min 
            for(int j=i+2;j<n;j++){
                 if(s[j]>s[i]&&s[j]<s[m]) // a no.is taken  min if it is grater than s[i] and and min among right most terms 
                      m=j;
                }
            t=s[i];s[i]=s[m];s[m]=t;// after finding s[m] ; swaping s[i]and s[m]
            break;//because only one swap required to increse the value of string
         }
     }
     if( strcmp(s,p)==0)//if there is no swaping done it means there is no greater string,then string remains same 
      printf("no answer");
     
  else{//after swaping i th place , i is stored in a; and all right most indices are arranged in ascending order by using sorting array
   for(int k=a+1;k<n;k++)
     {   
        m=k;
        for(int j=k+1;j<n;j++)
        {
         if(s[m]>s[j])
          m=j;
        }
        t=s[k];s[k]=s[m];s[m]=t;
     }
     puts(s);
     }
    return 0;
}