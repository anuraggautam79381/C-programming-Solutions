#include<stdio.h>
void main()
{  
  char str1[50];
  char str2[50];
  int res;

  printf("enter first string:\n");
  gets(str1);
  printf("enter second string:\n");
  gets(str2);

  res=strcmp(str1,str2);

  if(res==0)
  {
    printf("both string equal\n");
  }
   else if(res<0)
   {
   printf("First string is lexicographically smaller than second\n");
   }
   else
   {
    printf("First string is lexicographically greater than second\n");
   }

}