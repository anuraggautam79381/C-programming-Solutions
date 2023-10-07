#include<stdio.h>
void main()
{
int amount;
int notes500,notes100,notes50,notes10;
printf("enter the amount:\n");
scanf("%d",&amount);
if(amount>=500){
    notes500=amount/500;
    amount-=notes500*500;
}
if(amount>=100){
    notes100=amount/100;
    amount-=notes100*100;
}
if(amount>=50){
    notes50=amount/50;
    amount-=notes50*50;
}
if(amount>=10){
    notes10=amount/10;
    amount-=notes10*10;
}
printf("total number of notes:\n");
printf("500=%d\n",notes500);
printf("100=%d\n",notes100);
printf("50=%d\n",notes50);
printf("10=%d\n",notes10);

}