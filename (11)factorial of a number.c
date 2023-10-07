#include<stdio.h>
void main(){
 int n,i;
 printf("enter the number:\n");
 scanf("%d",&n);
 long fact=1;
 for(i=1;i<=n;i++)
 {
    fact=fact*i;
 }
printf("factorial of %d=%lu",n,fact);







}