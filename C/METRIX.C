#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z;
int d[2][2];
int a[2][2]={{1,2},{3,4}};
int b[2][2]={{5,6},{7,8}};
int c=0;
clrscr();
for(x=0;x<2;x++)
{for(y=0;y<2;y++)
 {for(z=0;z<2;z++)
  { c = c+a[x][z]*b[z][y];}
  d[x][y]= c;
  c=0;}}
  for(x=0;x<2;x++)
    {for(y=0;y<2;y++)
  {printf("%d ",d[x][y]);
  }
printf("\n");}
getch();
return 0;
}
