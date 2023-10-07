#include<stdio.h>
void main()
{
int a[100],n,i,min;
printf("enter number of elements:\n");
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
    if(a[i]<min)
    min=a[i];
}
printf("minimum is:%d",min);

}