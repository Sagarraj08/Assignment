#include<stdio.h>
#include<conio.h>
int main()
{
float P,R,T,SI;
clrscr();
printf("Enter amount : ");
scanf("%f",&P);
printf("Enter time durarion in months : ");
scanf("%f",&T);
printf("Enter rate of interest : ");
scanf("%f",&R);
SI = (P*R*T)/100;
printf("Simple interest is : %f",SI);
getch();
return 0;
}
