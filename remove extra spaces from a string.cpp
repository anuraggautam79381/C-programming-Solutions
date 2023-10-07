#include<stdio.h>
int main()
{
  char str[]="  progr   mming";
  int i,count=0;
  printf("before = %s",str);

  for(i=0;str[i];i++)
  {
    if(str[i]!=' ')
    {
        str[count]=str[i];
        count++;
    }
  }
  str[count]='\0';

printf("\nafter= %s",str);

return 0;
 }













