#include<stdio.h>
void main()
{
  char str1[50];
  char str2[50];
  int i;
  printf("enter the string:\n");
  fgets(str1,50,stdin);
  for(i=0;str1[i]!='\0';i++)
  {
    str2[i]=str1[i];
  }
str2[i]='\0';
printf("copied string is %s",str2);



}