#include<stdio.h>
void main(){
   int n;
   printf("enter the number:\n");
   scanf("%d",&n);
   long fact=1;
   for(int i=1;i<=n;i++){
         fact=fact*i;
   }

 printf("factorial is%d=%lu",n,fact);

}