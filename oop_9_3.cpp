#include<iostream>
#include<conio.h>
class account
{
protected:
char name[10];
int ac_type;
int ac_no;
public:
void setdata()
{
cout<<"Enter the Name        :";
cin>>name;
cout<<"Enter the Account No  :";
cin>>ac_no;
}
void disp(int n)
{
ac_type=n;
cout<<"\nName of Account Holder:"<<name;
cout<<"\nAccount Number        :"<<ac_no;
if(ac_type==1)
cout<<"\nAccount Type          :CURRENT";
else
cout<<"\nAccount Type          :SAVING";
}
};
class cur_acc:public account
{
float balance;
public:
cur_acc()
{
balance=0.00;
}
void deposit()
{
int no;
cout<<"Enter the Amount:";
cin>>no;
balance=balance+no;
}
void withdrawal()
{
int no;
cout<<"Enter the Amount:";
cin>>no;
if(no>balance)
cout<<"->Your withdrawal more than Account Balance.";
else
 {
 balance=balance-no;
 cout<<"->Withdrawal is Passed";
 }
}
void disp()
{
cout<<"\nTotal  Balance       :Rs."<<balance;
}
};
class sav_acc:public account
{
int i;
float balance;
public:
sav_acc()
{
balance=0.00;
i=0;
}
void deposit()
{
int no;
cout<<"Enter the Amount:";
cin>>no;
i=no*3/100;
balance=balance+no+i;
cout<<"->Amount is Added Your Balance.";
}
void withdrawal()
{
int no;
cout<<"Enter the Amount:";
cin>>no;
if(no>balance)
 cout<<"->Your withdrawal more than Account Balance.";
else
 {
 balance=balance-no;
 cout<<"->Withdrawal is Passed";
 }
}
void disp()
{
cout<<"\nInterest of Amount     :"<<i<<" Rs.";
cout<<"\nTotal  Balance         :"<<balance<<" Rs.";
}
};
void main()
{
int no;
char ch;
account cu;
cur_acc obj1;
sav_acc  obj2;
clrscr();
cu.setdata();
cout<<"C->CURRENT ACCOUNT.\nS->SAVINGS ACCOUNT.\nEnter the Account Type:";
cin>>ch;
do
{
cout<<"\n1.DEPOSIT.\n2.WITHDRAWAL.\n3.MY ACCOUNT DETAILS.\n4.EXIT.\nEnter the Choice:";
cin>>no;
if(ch=='c' || ch=='C')
{
 switch(no)
 {
 case 1:
 obj1.deposit();
 break;
 case 2:
 obj1.withdrawal();
 break;
 case 3:
 cu.disp(1);
 obj1.disp();
 break;
 case 4:
 cout<<"PRESS ENTER FOR EXIT...";
 break;
 default:
 cout<<"Invalid enter the number,TRY AGAIN.";
 }
}
if(ch=='s' || ch=='S')
{
 switch(no)
 {
 case 1:
 obj2.deposit();
 break;
 case 2:
 obj2.withdrawal();
 break;
 case 3:
 cu.disp(0);
 obj2.disp();
 break;
 case 4:
 cout<<"PREES ENTER FOR EXIT...";
 break;
 default:
 cout<<"Invalid enter the number,TRY AGAIN.";
 }
}
}while(no!=4);
getch();
}