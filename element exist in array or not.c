#include<stdio.h>
void main()
{
 int a[]={10,20,30,40,50};
 int num,flag=0,index;
 printf("enter number to check:\n");
 scanf("%d",&num);
 for(int i=0;i<5;i++)
 {
    if(num==a[i])
    {
      flag=1;
      index=i;
    }
 }
 if(flag==1)
 printf("the num %d exist at the index of %d",num,index);
 else
 printf("num not exist in an array:\n");

}