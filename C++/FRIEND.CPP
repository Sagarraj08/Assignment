#include<iostream.h>
#include<conio.h>
class a
{
private : int x,y;
friend int max(a);
};
int max(a)
{ int x,y;
cout<<"Enter value of X ";
cin>>x;
cout<<"Enter value of Y ";
cin>>y;

  if(x>y)
	{cout<<"X is max";}
  else
	{cout<<"Y is max";}
}

int main()
{
clrscr();
a obj;
max(obj);
getch();
return 0;
}