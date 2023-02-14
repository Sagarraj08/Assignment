#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
clrscr();
int a,rev = 0, b;
printf("Enter an integer: ");
scanf("%d",&a);
while(a != 0)
{b=a%10;
rev=rev*10+b;
a/=10;
}
printf("Reversed Number = %d",rev);
getch();
return 0;

}