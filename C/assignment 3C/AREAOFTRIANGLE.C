#include<stdio.h>
#include<conio.h>
int main()
{
float A,d;
float height,base;
clrscr();
printf("Enter height of triangle ");
scanf("%f", &height);
printf("Enter base of triangle ");
scanf("%f", &base);
d= height*base;
A = d/2;
printf("Area of Circle is %f",A);
getch();
return 0;
}