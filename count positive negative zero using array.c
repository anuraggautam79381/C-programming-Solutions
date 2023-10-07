#include<stdio.h>
void main()
{
int a[100],i,p=0,n=0,z=0;
printf("enter number:\n");

for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
    if(a[i]>0)
    p++;
    else if(a[i]<0)
    n++;
    else
    z++;
}
printf("\npositive no:%d\nnegative no:%d\nzeroes:%d\n",p,n,z);

}
