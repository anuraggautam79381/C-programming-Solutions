#include<stdio.h>
void main()
{
  char str[50];
  int i;

  printf("enter lowercase text:\n");
  gets(str);

  for(i=0;str[i]!='0';i++)
  {
     
     if(str[i]>='a' && str[i]<='z')
     {
        str[i]=str[i]-32;
     }

  }
printf("uppercase string:%s",str);



}