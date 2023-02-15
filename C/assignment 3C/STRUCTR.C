#include<stdio.h>
#include<conio.h>
 struct employee
 {
 int empno;
 char empname[30];
 char empaddress[50];
 int empage;
 };
void main()
{
struct employee e1;
struct employee e2;
struct employee e3;
struct employee e4;
struct employee e5;
e1.empno = 1;
strcpy(e1.empname,"sagar");
strcpy(e1.empaddress,"sagar society");
e1.empage = 28;
clrscr();
printf("\nEmp no: %d \nemp name:%s\nemp address:%s\nemp age: %d\n",e1.empno,e1.empname,e1.empaddress,e1.empage);

e2.empno = 2;
strcpy(e2.empname,"anand");
strcpy(e2.empaddress,"anand society");
e2.empage = 25;
printf("\nEmp no: %d \nemp name:%s\nemp address:%s\nemp age: %d\n",e2.empno,e2.empname,e2.empaddress,e2.empage);

e3.empno = 3;
strcpy(e3.empname,"dhaval");
strcpy(e3.empaddress,"laskari society");
e3.empage = 29;
printf("\nEmp no: %d \nemp name:%s\nemp address:%s\nemp age: %d\n",e3.empno,e3.empname,e3.empaddress,e3.empage);

e4.empno = 4;
strcpy(e4.empname,"darpan");
strcpy(e4.empaddress,"darpan society");
e4.empage = 27;
printf("\nEmp no: %d \nemp name:%s\nemp address:%s\nemp age: %d\n",e4.empno,e4.empname,e4.empaddress,e4.empage);

e5.empno = 5;
strcpy(e5.empname,"montu");
strcpy(e5.empaddress,"Kamlesh society");
e5.empage = 30;
printf("\nEmp no: %d \nemp name:%s\nemp address:%s\nemp age: %d\n",e5.empno,e5.empname,e5.empaddress,e5.empage);

getch();
}