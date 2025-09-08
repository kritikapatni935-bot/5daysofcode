//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
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
