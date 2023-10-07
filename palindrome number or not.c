#include<stdio.h>
void main(){
  int n,r,c;
  printf("enter the number:\n");
  scanf("%d",&n);
  c=n;
  int sum=0;
  while(n>0){
     r=n%10;
     n=n/10;
     sum=sum*10+r;
  }
if(c==sum){
   printf("palindrome");
}
else
printf("not");
}