#include<stdio.h>
void main()
{
  int a[100],n,i,pos,value;
  printf("enter number of elements:\n");
  scanf("%d",&n);
  printf("enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter element to insert:\n");
  scanf("%d",&value);
  printf("enter position:\n");
  scanf("%d",&pos);
  for(i=n-1;i>=pos-1;i--)
  
    a[i+1]=a[i];
    a[pos-1]=value;
 
 for(i=0;i<=n;i++)
 {
    printf("%d\n ",a[i]);
 }

}