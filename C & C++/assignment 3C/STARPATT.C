#include<stdio.h>
#include<conio.h>
void main()
{
int j=0,i=1;
clrscr();
for(i=1;i<=5;i++)
{for(j=1;j<=5;j++)
{  if(i>j)
	 printf("0");
   else
	 printf("1");
} printf("\n");}
getch();
}