#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("\n enter age:");
scanf("%d",&age);
(age>=18)?printf("age is elegible for vote:%d",age):printf("age is not elegible for vote:%d",age);
getch();
}