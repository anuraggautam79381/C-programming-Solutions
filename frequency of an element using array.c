#include<stdio.h>
void main()
{
  int a[10],i,key,freq;
  printf("enter the elements:\n");
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter number whose frequency to find:\n");
  scanf("%d\n",&key);
  for(i=0;i<10;i++)
  {
    if(a[i]==key)
    {
        freq++;
    }
  }
  printf("\nfrequency of %d element is %d",key,freq);
}