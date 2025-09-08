// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
int a,b,sum,c,d,diff,x,y,pro,s,q,div,w,o,mod;
printf("enter two numbers: ");
scanf("%d %d",&a,&b);
sum=a+b;
printf("%d is sum\n",sum);
printf("enter two numbers: ");
scanf("%d %d",&c,&d);
diff=c-d;
printf("%d\n",diff);
printf("enter two values: ");
scanf("%d %d",&x,&y);
pro=x*y;
printf("%d is product\n",pro);
printf("enter two numbers:");
scanf("%d %d",&s,&q);
div=s/q;
printf("%d id division",div);
printf("enter two numbers:");
scanf("%d %d",&w,&o);
mod=w%o;
printf("%d is modulus",mod);


    return 0;
}
