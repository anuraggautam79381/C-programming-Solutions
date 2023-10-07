#include<stdio.h>
void main()
{
int a[100],n,i,temp;
printf("enter number of elements:\n");
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
temp=a[0];
for(i=0;i<n-1;i++)
{
    a[i]=a[i+1];
}
a[i]=temp;
for(i=0;i<n;i++)
{
    printf("\n%d  ",a[i]);
}










}