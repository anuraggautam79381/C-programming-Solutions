#include<stdio.h>
void main()
{
int a[100],n,i,max;
printf("enter number of elements:\n");
scanf("%d",&n);
printf("enter %d elements:\n",n);
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
printf("maximum number is:%d\n",max);


}