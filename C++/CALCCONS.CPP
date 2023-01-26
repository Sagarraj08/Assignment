#include<iostream.h>
#include<conio.h>
class calc

{
  public : calc()
		 { int x,y;
		   cout<<"Enter value of x ";
		cin>>x;
		cout<<"enter value of y ";
		cin>>y;
		  }

};

int main()
{
char c;
int x,y;
clrscr();
calc();
cout<<"enter sign of operation (from +,-,*,/) you want to perform";
cin>>c;
switch(c)
 {   case '+':
	 cout<<"Sum of x & y is "<<x+y;
	 break;
	case '-':
	  cout<<"Substraction of x & y is "<<x-y;break;
	case '*':
	cout<<"multiplication of x & y is "<<x*y;break;
	case '/':
	cout<<"division of x & y is "<<x/y;break;
}

getch();
return 0;
}