#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("Enter 10 number\n");
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&a);

      /*	for(int j=1;j<=a;j++)
	{
		if(j%2==0)
		{
			printf("%d",a);
		}
	} */
	if(a%2==0)
	{
	printf("%d is even",a);
	}
	}
	getch();
}
