#include<stdio.h>
void main()
{
  char str[50],n;
  int i,count=0;
  printf("enter text or string:\n");
  fgets(str,50,stdin);
  printf("enter the character to count:\n");
  scanf("%c",&n);
  for(i=0;str[i]!='\0';i++)
   {
     if(str[i]==n)
        count++;
   }
     printf("count:%d\n",count);
}