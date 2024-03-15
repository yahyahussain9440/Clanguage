#include<stdio.h>
#include<conio.h>
void main()
{
int b,h,area;
clrscr();
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of h:");
scanf("%d",&h);
area=(b*h)/2;
printf("area of triangle is %d",area);
getch();
}