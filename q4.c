#include<stdio.h>

int main() {
int r,area,circumference;
printf("enter the value: ");
scanf("%d",&r);
circumference=2*3.14*r;
area=3.14*r*r;
printf("%d is circumference, %d is area",circumference,area);
    return 0;
}
