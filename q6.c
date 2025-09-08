#include<stdio.h>
int main(void)
{
    int a,b,c;
    a=4;
    b=5;
    c=0;
    c=b;
    b=a;
    a=c;
    printf("%d is a, %d is b",a,b);

}
