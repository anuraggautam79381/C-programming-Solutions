#include<stdio.h>
void main()
{
 int a[100],i,even=0,odd=0;
 printf("enter number of elements:\n");
 for(i=0;i<10;i++)
 {
   scanf("%d",&a[i]);
   if(a[i]%2==0)
   even++;
   else
   odd++;
 }
printf("\neven numbers:%d\nodd numbers:%d\n",even,odd);



}