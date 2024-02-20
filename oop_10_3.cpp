#include<iostream>

using namespace std;

int main()
{
int a,b, c;
cout<<"enter the value of a and b";
cin>>a>>b;
try
{
	if(b==0)
		throw(c);
	else
	c=a/b;
}
catch(...)
{
	cout<<"A catch block for all types of exceptions has caught an exception";
}

}