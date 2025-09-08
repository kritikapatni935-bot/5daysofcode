#include<stdio.h>
#include<math.h>
int main(void){
int n,p,t,r;
int S_I;
double C_I;
printf("enter three values: ");
scanf("%d %d %d",&p,&t,&r);
S_I=(p*r*t)/100;
printf("enter the value: ");
scanf("%d",&n);
C_I=p*pow((1+(r/100)),n);
printf("%d is simple intrest,%.2lf is compound intrest",S_I,C_I);


}
