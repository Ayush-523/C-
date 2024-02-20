#include <bits/stdc++.h>
using namespace std;
class Integer {
private:
	int i;
public:
    Integer(int i = 0)
	{
		this->i = i;
	}
	Integer operator++()
	{
		Integer temp;
		temp.i = ++i;
		return temp;
	}
    Integer operator++(int)
	{
		Integer temp;
		temp.i = i++;
		return temp;
	}
	void display()
	{
		cout << "i = " << i << endl;
	}
};
int main()
{
	Integer i1(3);

	cout << "Before increment: ";
	i1.display();
    Integer i2 = ++i1;
    cout << "After pre increment: ";
	i2.display();
    cout << "After post increment: ";
    Integer i3 = i1++;
    i3.display();
}

