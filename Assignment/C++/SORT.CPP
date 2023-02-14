#include <iostream.h>
#include<conio.h>
template <class Obj>
void bsort(Obj a[], Obj n)
{
    for (int i=0; i<n-1; i++)
    {
	for (int j=i+1; j<n; j++)
	    {
		if(a[i]>a[j])
		{
		    Obj item;
		    item=a[i];
		    a[i]=a[j];
		    a[j]=item;
		}
	    }
    }
 }


int main ()
 {   clrscr();
    int array[10]= {50, 10, 20, 15, 62, 32, 6, 80, 90, 100};

 cout<<"The array consists of"<<endl;
for (int j=0; j<10; j++)
    cout<<array[j]<<endl;

cout<<"The sorted array is"<<endl;
bsort(array, 10);
for (int i=0;i<10;i++)
    cout<<array[i]<<endl;
getch();

return 0;
}