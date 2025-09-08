//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
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
