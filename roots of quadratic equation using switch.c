#include<stdio.h>
void main(){
float a,b,c,d,r1,r2;
printf("enter values of a,b,c:\n");
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
switch(d>0){
    case 1:
       r1=-b+sqrt(d)/2*a;
       r2=-b-sqrt(d)/2*a;
           printf("real roots:%.2f %.2f",r1,r2);
           break;
    case 0:switch(d==0){
          case 1:
          r1=r1=-b/2*a;
                printf("equal roots:%.2f %.2f",r1,r2); 
          case 0:printf("roots are imaginary");      
    }
               

           }       


}















