#include<stdio.h>
#include<conio.h>
void main()
{  int y,d;
clrscr();
printf("Enter number of days you want to convert to years ");
scanf("%d",&d);
y=d/365;
printf("%d is equal to %d year",d,y);
getch();
}