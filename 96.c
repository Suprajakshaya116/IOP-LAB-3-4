#include <stdio.h>
#include <string.h>
//96) WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS.

int main()
{
  int n,ind;
  char temp[10];

  printf("how many strings u want to enter \n");
  scanf("%d", &n);
  char str[n][20];//for inputing n strings we need a 2D char array

  printf("enter strings \n");
  for (int i = 0; i < n; i++)
    scanf("%s", str[i]);
  
  
  printf("\n\n");
  for (int i = 0; i < n-1; i++)//swaping is done till last but one word
  {
    int max = 0;//it is for storing max differences b/w two words

    for (int j = i + 1; j< n; j++)
    {
      int n = strcmp(str[i], str[j]);
     
        if (n > max)//if there is max diff b/w str[i] and str[j]; then only we need to swap them
        {
          max = n;
          ind = j;
          strcpy(temp, str[i]);
          strcpy(str[i], str[ind]);
          strcpy(str[ind], temp);
        }
     
     }
  }
for (int i = 0; i < n; i++)
{
  /* code */
    
    printf("%s\n", str[i]);
}

  return 0;
}