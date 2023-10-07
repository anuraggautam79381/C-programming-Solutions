#include<stdio.h>
void main()
{
int a[100],i,j,temp,n;
printf("enter number of element:\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("after sorting:\n");
for(i=0;i<n;i++)
printf("%d",a[i]);

}