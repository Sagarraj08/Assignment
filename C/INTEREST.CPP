#include<stdio.h>
#include<conio.h>
#define period 10
#define principal 5000.0
void main()
{
clrscr();
int year;
float value;
float amount=principal;
float inrate=0.11;
year=0;
while(year<=period)
{
printf("%2d %8.2f\n",year,amount);
float value=amount+inrate*amount;
year=year+1;
amount=value;}
getch();
}


