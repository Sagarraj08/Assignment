#include<iostream.h>
#include<conio.h>
class calc

{        float x,y ;
	 public : float result()
	 { 	cout<<"Enter value of x ";
		cin>>x;
		cout<<"enter value of y ";
		cin>>y;
	return 0; }
	public : float sum()
	{ 	 cout<<"Sum of x & y is "<<x+y;return 0;			}
	public :float sub()
	{  cout<<"Substraction of x & y is "<<x-y;return 0;	}
	public : float multi()
	{cout<<"multiplication of x & y is "<<x*y;return 0;}
	public :float div()
	{cout<<"division of x & y is "<<x/y;return 0;}
};
float main()
{
clrscr();
	calc c;
	int z;
	clrscr();
	cout<<"To add two numbers enter 1\n";
	cout<<"To substract two numbers enter 2\n";
	cout<<"To multiply two numbers enter 3\n";
	cout<<"To divide two numbers enter 4\n";
	cin>>z	;
	switch(z)
		{
	case 1:{c.result();c.sum();break;}
	case 2:{c.result();c.sub();break;}
	case 3:{c.result();c.multi();break;}
	case 4:{c.result();c.div();break; }
	}
	getch();
	return 0;
}