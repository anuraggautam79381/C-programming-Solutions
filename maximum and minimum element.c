#include<stdio.h>
void main()
{
  int a[100],i,n,max,min;
  printf("enter the number of elements:\n");
  scanf("%d",&n);
  printf("enter %d elements",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<n;i++)
  {
  if(a[i]>max)
  max=a[i];
  }
  min=a[0];
  for(i=0;i<n;i++)
  {
  if(a[i]<min)
  min=a[i];
  }
printf("maximum element is:%d\n",max);
printf("minimum element is:%d\n",min);  



}