#include<stdio.h>
void main()
{
  char str1[50];
  char str2[50]=" hello";
  int i,j,k;

  printf("enter string:\n");

  fgets(str1,50,stdin);
  for(i=0;str1[i]!='\0';i++);
  //printf("%d",i);
 for(j=i-1,k=0;str2[k]!='\0';k++,j++)
  {
     str1[j]=str2[k];
  }
str1[j]='\0';

printf("%s",str1);


}