#include<stdio.h>
#include<conio.h>
int main()
{
float A;
float length,width;
clrscr();
printf("Enter length of rectangle ");
scanf("%f", &length);
printf("Enter width of rectangle ");
scanf("%f", &width);
A = length*width;
printf("Area of Circle is %4.2f",A);
getch();
return 0;
}