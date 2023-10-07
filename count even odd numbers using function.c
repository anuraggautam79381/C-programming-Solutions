#include<stdio.h>
void main()
{
  int a[100],n,i,even=0,odd=0;
  printf("enter number of elements:\n");
  scanf("%d",&n);
  printf("enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    even++;
    else
    odd++;
  }
  printf("\neven numbers:%d\nodd numbers:%d\n",even,odd);
  
}