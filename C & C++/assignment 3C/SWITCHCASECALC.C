#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
int c;
clrscr();
printf("give value of a ");
scanf("%d",&a);
printf("give value of b ");
scanf("%d",&b);
printf(" Press 1 to get value of a+b \n Press 2 to get value of a-b \n Press 3 to get value of a*b \n Press 4 to get value of a/b \n Press 5 to get value of a%b \n");
scanf("%d",&c);
printf("%d",c);
switch(c)
{
case 1:c;
printf("sum of a & b is %d",a+b);
break;
case 2:c ;
printf("substraction of a & b is %d",a-b);
break;
case 3:c;
printf("multiplication of a & b is %d",a*b);
break;
case 4:c;
printf("Division of a & b is %d",a/b);
break;
case 5:c;
printf("Moduler of a & b is %d",a%b);
break;
}
getch();

}

