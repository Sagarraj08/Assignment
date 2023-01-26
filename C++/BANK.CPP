#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>
class bank
{
      char name[50];
      char type[50];
      float balance;
      int number;
      public: bank(int acc_no,char *acc_name,char *acc_type,float acc_balance)
	      {
	      number=acc_no;
	      strcpy(name,acc_name);
	      strcpy(type,acc_type);
	      balance=acc_balance;
	      }
	     void deposit();
	     void withdraw();
	     void display();
};
void bank::deposit()
		{ int amt1;
		cout<<"\nEnter amount you want to deposit=";
		cin>>amt1;
		balance=balance+amt1;
		}
void bank::withdraw()
		{
		int wth1;
		cout<<"\nEnter amount you want to withdraw";
		cin>>wth1;
		if(wth1>balance){cout<<"insufficient balance";};
		balance=balance-wth1;
		}
void bank::display()
		{ cout<<"\n-------------";
		cout<<"\nAccount number :"<<number;
		cout<<"\nName :"<<name;
		cout<<"\nAccount type :"<<type;
		cout<<"\nAccount balance :"<<balance;
		}


int main()
{clrscr();
float acc_balance;
int acc_no;
char acc_name[50];
char acc_type;
cout<<"\nEnter Account Details :\n";
cout<<"\nAccount number";
cin>>acc_no;
cout<<"\nName :";
cin>>acc_name;
cout<<"Account type";
cin>>acc_type;
cout<<"\nAccount balance";
cin>>acc_balance;
bank b1(acc_no,acc_name,acc_type,acc_balance);
b1.deposit();
b1.withdraw();
b1.display();
getch();
return 0;

}