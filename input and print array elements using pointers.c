#include<stdio.h>
void main()
{
  int a[10],*ptr,i;
  printf("enter the elements:\n");
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }

ptr=a;
printf("array elements using pointers:\n");
  for(i=0;i<10;i++)
  {
    printf("%d\n",*ptr);
    ptr++;
  }

}