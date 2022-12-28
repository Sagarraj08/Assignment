#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("Enter number of day to find out name of week day ");
scanf("%d",&x);
switch(x)
{
case 1:x;
printf("1st is Monday");
break;
case 2:x ;
printf("2nd is Tuesday");
break;
case 3:x;
printf("3rd is Wednusday");
break;
case 4:x;
printf("4th is Thursday");
break;
case 5:x;
printf("5th is Friday");
break;
case 6:x;
printf("6th is Saturday");
break;
case 7:x;
printf("7th is Sunday");
break;}
getch();
}