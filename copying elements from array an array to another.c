#include <stdio.h>
#define N 10
int main()
{
    
  int a[N],b[N],i;
printf("enter %d integer number\n",N);
for(i=0;i<N;i++)
scanf("%d",&a[i]);

printf("\ncopying elements of array a to b...\n");
for(i=0;i<N;i++)
    b[i]=a[i];

printf("\noriginal(a[%d])>>>copy(b[%d])\n",N,N);
for(i=0;i<N;i++)
printf("%4d\t\t-->%6d\n",a[i],b[i]);



    return 0;
}
