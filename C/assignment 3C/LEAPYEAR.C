#include<stdio.h>
#include<conio.h>
int main()
{
int year;
clrscr();

printf("Enter year : ");
scanf("%d",&year);
if(year % 400 == 0)
{printf("%d year is a leap year",year);}
else if(year%100==0)
{printf("%d year is not a leap year",year);}
else if(year%4==0)
{printf("%d year is a leap year",year);}
else{printf("%d year is not a leap year",year);}
getch();
return 0;
}
