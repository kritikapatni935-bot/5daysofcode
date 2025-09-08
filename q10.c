#include<stdio.h>
int main()
{
    int hrs,min,sec,s;
    printf("enter the value: ");
    scanf("%d",&sec);
    hrs=(sec/3600);
    min=(sec%3600)/60;
    s=sec%60;
    printf("%02d:%02d:%02d",hrs,min,s);
    return 0;
}
