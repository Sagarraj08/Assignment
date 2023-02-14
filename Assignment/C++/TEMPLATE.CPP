#include<iostream.h>
#include<conio.h>
template<class T>T swap(T x,T y)
{
x=y;
y=x-10;
cout<<"vlaue of x "<<x<<"\nValue of y "<<y;
return 0;}
void main()
{
clrscr();
swap(20,30);
getch();
}