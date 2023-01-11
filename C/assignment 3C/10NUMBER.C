#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,j;
	clrscr();
	printf("Enter 10 number\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a);

     /* for(j=1;j<=a;j++)
	{
		if(j%2==0)
		{
			printf("%d",a);
		}
	}*/
	if(a%2==0)
	{
	printf("%d is even",a);
	}
	else if(a%2!=0)
	{ printf("%d is odd",a);}
	}
	getch();
}
