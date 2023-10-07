#include<stdio.h>
void main()
{
int a[5],i;
printf("enter array elements:\n");
for(i=0;i<5;i++)
{
   scanf("%d",&a[i]);
}
printf("array element in reverse order:\n ");
for(i=4;i>=0;i--)
{
   printf("%d ",a[i]);
}

}