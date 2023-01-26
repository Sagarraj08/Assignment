/* C++ program to find Area using Function Overloading  */

#include<iostream.h>
#include<conio.h>
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
	int s,l,b,x;
	float r,bs,ht;
	clrscr();
      cout<<"to find area of Square press 1\nto find area of Rectangle press 2\nto find area of circle press 3\nto find area of triangle press 4";
	cin>>x;
	if(x==1)
		{cout<<"Enter side of a square:";
		cin>>s;
		cout<<"Area of square is"<<area(s);
		}
	else if(x==2)
	       {cout<<"Enter length and breadth of rectangle:";
		cin>>l>>b;
		cout<<"\nArea of rectangle is "<<area(l,b);}
	else if(x==3)
		{cout<<"Enter radius of circle:";
		cin>>r;
		 cout<<"\nArea of circle is "<<area(r);}
	else if(x==4)
		{cout<<"Enter base and height of triangle:";
		cin>>bs>>ht;
		cout<<"\nArea of triangle is "<<area(bs,ht);
		}
    getch();
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}