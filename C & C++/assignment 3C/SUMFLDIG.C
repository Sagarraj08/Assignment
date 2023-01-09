#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,firstdigit,lastdigit;
clrscr();
printf("Enter number to find sum of its first & last digit\n");
scanf("%d",&n);
lastdigit=n%10;
while(n>=10)
{
n=n/10;
}
firstdigit=n;
sum=firstdigit+lastdigit;
printf("sum of first & last digit = %d",sum);
getch();
return 0;
}