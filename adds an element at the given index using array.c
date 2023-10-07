#include<stdio.h>
void main()
{
 int a[100],position,i,n,value;
 printf("enter number of element:\n");
 scanf("%d",&n);
printf("enter %d elements\n",n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter position where you want to insert element:\n");
scanf("%d",&position);
printf("enter value to insert:\n");
scanf("%d",&value);

for(i=n-1;i>=position-1;i--)
a[i+1]=a[i];

a[position-1]=value;
printf("resultant array is\n");

for(i=0;i<=n;i++)
printf("%d\n",a[i]);


}