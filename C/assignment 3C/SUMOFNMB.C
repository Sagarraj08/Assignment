#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,c,m;
clrscr();
scanf("%d",&n);
printf("enter %d integers\n",n);
while (n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("sum of the integers = %d\n",sum);
getch();
return 0;
}