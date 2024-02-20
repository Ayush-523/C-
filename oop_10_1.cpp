#include <iostream>
using namespace std;
class Exception
{
public:
	Exception()
    {
        cout<<"Math error: Attempted to divide by Zero\n";
}
};
float Division(float num, float den)
{
	if (den == 0)
		throw Exception();
	return (num / den);
}
int main()
{
	float numerator, denominator, result;
	cout<<"Enter the numerator and denominator";
    cin>>numerator>>denominator;
	try {
		result = Division(numerator, denominator);
		cout << "The quotient is " << result << endl;
	}
	catch (Exception)
    {
		cout << "Exception occurred" << endl;
	}
}