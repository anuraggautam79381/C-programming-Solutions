#include<stdio.h>
void main()
{
  int a[3][3],i,j;
  int b[3][3],flag=0;
  printf("enter the first matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
   printf("enter the second matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
  }
for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        if(a[i][j]==b[i][j])
        flag=1;
    }
  }
  if(flag==1)
  printf("both matrix are equal:\n");
  else
  printf("not equal:\n");











}