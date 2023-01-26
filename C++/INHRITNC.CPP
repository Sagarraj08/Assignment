#include<iostream.h>
#include<conio.h>
class s1
{   public : void  getc()
	{cout<<"sagar"; }
};
class s2 : public s1
{  public :void  getc2()
{cout<<"sagar2";}
};
class s3
{ public : void getc3()
{ cout<<"sagar3";}
};
void main()
{       clrscr();
	s2 obj;
	obj.getc();
	getch();
}