#include<iostream.h>
#include<conio.h>
class Student
{
	int roll;
	char name[25];
    public:
	void getdata()
	{
		cout<<"\n -----------------------------------------";
		cout<<"\n Enter Roll No.            : ";
		cin>>roll;
		cout<<"\n Enter Student Name        : ";
		cin>>name;
	}
	void putdata()
	{
		cout<<"\n -----------------------------------------";
		cout<<"\n ********** Student Marklist **********";
		cout<<"\n -----------------------------------------";
		cout<<"\n Roll No.             :  "<<roll;
		cout<<"\n Student Name         :  "<<name<<endl;
	}
};
class StudentExam : public Student      //Class StudentExam derived from Class Student
{
    public:
	int sub1, sub2, sub3, sub4, sub5;
	float per;
    public:
	void accept_data()
	{
		getdata();
		cout<<"\n Enter Marks out of 100 for Subject 1 : ";
		cin>>sub1;
		cout<<"\n Enter Marks out of 100 for Subject 2 : ";
		cin>>sub2;
		cout<<"\n Enter Marks out of 100 for Subject 3 : ";
		cin>>sub3;
		cout<<"\n Enter Marks out of 100 for Subject 4 : ";
		cin>>sub4;
		cout<<"\n Enter Marks out of 100 for Subject 5 : ";
		cin>>sub5;
		}
	void display_data()
	{
		putdata();
		cout<<"\n Marks for Subject 1   :  "<<sub1;
		cout<<"\n Marks of Subject 2   :  "<<sub2;
		cout<<"\n Marks of Subject 3   :  "<<sub3;
		cout<<"\n Marks of Subject 4   :  "<<sub4;
		cout<<"\n Marks of Subject 5   :  "<<sub5;
	}
};
class StudentResult : public StudentExam      //Class StudentResult derived from Class StudentExam
{
    public:
	void calculate ()
	{
		per = (sub1+sub2+sub3+sub4+sub5)/5.0;
		cout<<"\n\n Total Percentage     :  "<<per;
		cout<<"\n ----------------------------------------- \n";
	}
};
int main()
{       clrscr();
	StudentResult str;     //Object 'str' is created of derived Class StudentResult
	int cnt, i;
	cout<<"\n Enter No. of Students You Want? : ";
	cin>>cnt;
	for(i=0; i<cnt; i++)
	{
		str.accept_data();
		str.display_data();
		str.calculate();
	}
	getch();
	return 0;
}