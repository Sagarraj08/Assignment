#include<stdio.h>
#include<conio.h>
int main()
{
int a,i;
unsigned long long fact=1;
 clrscr();
printf("enter number: ");
scanf("%d",&a);
if(a<0)
{printf("negative number not allowed");}
else
{for(i=1;i<=a;++i)
{fact=fact*i;}
printf("factorial of %d=%llu",a,fact);}
getch();
return 0;
}
