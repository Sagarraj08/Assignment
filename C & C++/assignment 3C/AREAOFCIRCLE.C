#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main()
{
float A;
float r;
clrscr();
printf("Radius of circle is");
scanf("%f", &r);
A = pi*r*r;
printf("Area of Circle is %0.4f",A);
getch();
return 0;
}