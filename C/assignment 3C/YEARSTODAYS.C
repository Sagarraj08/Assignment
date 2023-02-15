#include<stdio.h>
#include<conio.h>
void main()
{  int y,d;
clrscr();
printf("Enter number of years you want to convert to days ");
scanf("%d",&y);
d=y*365;
printf("%d years is equal to %d days",y,d);
getch();
}