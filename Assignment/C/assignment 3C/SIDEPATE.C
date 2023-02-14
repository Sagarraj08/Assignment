#include<stdio.h>
#include<conio.h>
void main()
{
char j,i,k=0;
clrscr();
for(i=1;i<=11;i++)
{i<=6?k++:k--;
for(j=1;j<=6;j++)
{  if(j<=k)
     {		printf("*");
} else
       printf(" ");
}
       printf("\n");}
getch();

}