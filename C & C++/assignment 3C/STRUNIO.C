#include<stdio.h>
#include<conio.h>
//declaring structure
struct str_employee
 {
 int empno;
 char empname[30];
 char empaddress[50];
 int empage;
 };
//declaring union
union uni_employee
 {
 int empno;
 char empname[30];
 char empaddress[50];
 int empage;
 };
 void main()
{
//creating variable for structure
struct str_employee e1;

//creating variable for union
union uni_employee e2;

e1.empno = 1;
strcpy(e1.empname,"sagar");
strcpy(e1.empaddress,"sagar society");
e1.empage = 28;
clrscr();
printf("\nEmp no: %d \nemp name:%s\nemp address:%s\nemp age: %d\n",e1.empno,e1.empname,e1.empaddress,e1.empage);

printf("accesing one member at a time\n");
printf("Emp no:%d\n",e1.empno);
printf("Emp name:%s\n",e1.empname);
printf("Emp address:%s\n",e1.empaddress);
printf("Emp age:%d\n",e1.empage);

e2.empno = 1;
strcpy(e2.empname,"sagar");
strcpy(e2.empaddress,"sagar society");
e2.empage = 28;
printf("\nEmp no: %d \nemp name:%s\nemp address:%s\nemp age: %d\n",e2.empno,e2.empname,e2.empaddress,e2.empage);

printf("accesing one member at a time\n");
printf("Emp no:%d\n",e2.empno);
printf("Emp name:%s\n",e2.empname);
printf("Emp address:%s\n",e2.empaddress);
printf("Emp age:%d\n",e2.empage);

//difference between size
printf("size of structure e1:%d\n",sizeof(e1));
printf("size of union e2:%d\n",sizeof(e2));
getch();
}