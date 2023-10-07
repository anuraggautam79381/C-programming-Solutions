#include<stdio.h>
void main()
{
  char a[50];
  char b[50];
  int i;

  printf("enter the text:\n");
  fgets(a,50,stdin);

  for(i=0;a[i]!='\0';i++)
  {
    b[i]=a[i];
  }

b[i]='\0';

printf("original text:%s",a);
printf("copied text:%s",b);


}