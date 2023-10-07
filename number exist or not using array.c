#include<stdio.h>
void main()
{
  int a[6],i,flag=0,index,num;
  printf("enter the elements:\n");
  for(i=0;i<6;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter num to check:\n");
  scanf("%d",&num);
  for(i=0;i<6;i++)
  {
    if(a[i]==num)
    {
      flag=1;
      index=i;
    }
  }
  if(flag==1)
  printf("%d element exists at an index of %d:\n",num,index);
  else
  printf("not exist");
}