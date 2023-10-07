#include<stdio.h>
void main()
{
int a[100],n,i,P=0,N=0,Z=0;
printf("enter number of elements:\n");
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
    if(a[i]>0)
    {
    P++;
    }
    else if(a[i]<0)
    {
    N++;
    }
    else
    Z++;
}
printf("\npositive no.%d\nnegative no.%d\nzeroes%d\n",P,N,Z);

}