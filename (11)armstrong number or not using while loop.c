#include<stdio.h>
#include<math.h>
void main(){
  int n,c,r;
  printf("enter number:\n");
  scanf("%d",&n);
  c=n;
  int arm=0;
  int k=log10(n)+1;
  while(n>0){
      r=n%10;
      n=n/10;
      arm=arm+(pow(r,k));
  }
    if(c==arm)
  printf("armstrong");
    else
    printf("no");












}