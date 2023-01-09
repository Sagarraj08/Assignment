#include<stdio.h>
#include<conio.h>
int main()
{
int i,arrey[]={1,2,3,8,5,6};
int length=sizeof(arrey)/sizeof(arrey[0]);
int max=arrey[0];
clrscr();
for(i=0;i<length;i++)
{
if(arrey[i]>max)
max=arrey[i];
}
printf("Largest element of arrey: %d\n ",max);
getch();
return 0;
}