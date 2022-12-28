#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter number to find out it is even or odd ");
scanf("%d",&a);
//find a is even or odd using ternary operator
(a%2==0)?printf("given number is even"):printf("given number is odd");
getch();
}