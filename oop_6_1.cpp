#include <iostream>

using namespace std;

class complex
{
    int r, i;
    public:
    complex()
    {
        cout<<"Default Constructor is invoked!!\n";
        cout<<"Enter Real and Imaginary parts of complex number in Default Constructor : \n";
        cin>>r>>i;
        display();
    }
    void display()
    {
        cout<<"Real and Imaginary parts of the complex number is : "<<r<<" + "<<i<<"i\n";
    }
    complex(int a, int b)
    {
        cout<<"Parameterized Constructor is invoked!!\n";
        r = a;
        i = b;
        display();
    }
    ~complex()
    {
        cout<<"Destructor is invoked!!\n";
    }
};
int main()
{
    int  x,y;
    cout<<"Enter Real and Imaginary part in Parameterized Constructor : ";
    cin>>x>>y;
    complex ob;
    complex ab(x,y);
    return 0;
}