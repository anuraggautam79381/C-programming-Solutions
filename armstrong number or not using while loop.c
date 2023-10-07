#include<stdio.h>
void main(){
   int n,r,c;
   printf("enter number:\n");
   scanf("%d",&n);
   c=n;
   int arm=0;
   while(n!=0){
       r=n%10;
       arm=(r*r*r)+arm;
       n=n/10;
   }
     if(c==arm){
       printf("armstrong number");
     }
     else
        printf("not");










}