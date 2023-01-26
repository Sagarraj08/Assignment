#include<iostream.h>
#include<conio.h>
#include<math.h>
inline int cube(int a)
   {
       return a*a*a;
   }
int main()
{
int a;
clrscr();
cout<<"Enter value of a to find cube ";
cin>>a;
cout<<"The cube of a is "<<cube(a);
getch();
return 0;
}