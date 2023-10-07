#include<stdio.h>
void main()
{
char a[50];
int i;
int count=0;

printf("enter the text or string:\n");
fgets(a,50,stdin);

for(i=0;a[i]!='\0';i++)
{
    count++;
}

printf("length of:%s=%d",a,count);


}