#include<iostream.h>
#include<conio.h>
class calc

{     	public:
int sum(int x,int y)
	{ cout<<"sum of x & y is ";
	return x+y;
	}
int sub(int x,int y)
	{ cout<<"substraction of x & y is ";
	return x-y;
	}
int multi(int x,int y)
	{cout<<"multiplication of x & y is ";
	return x*y;
	}
int div(int x,int y)
	{ cout<<"Division of x & y is ";
	return x/y;
	}
};
void main()
{
clrscr();
int x,y;
char c;
cout<<"enter value of x";
cin>>x;
cout<<"enter value of y";
cin>>y;
calc obj;
cout<<"Enter sign of operation you want to perform (+,-,*,/) ";
cin>>c;
if(c=='+')
{cout<<obj.sum(x,y); }
else if(c=='-')
{cout<<obj.sub(x,y); }
else if(c=='*')
{cout<<obj.multi(x,y); }
else if(c=='/')
{cout<<obj.div(x,y); }
getch();
}