#include<stdio.h>
void main()
{
int a[5];
int i;
printf("enter elements:\n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("array in reverse order:\n");
for(i=4;i>=0;i--)
{
    printf("%d  ",a[i]);
}


}