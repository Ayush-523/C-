#include <iostream>
using namespace std;

class Number
{
private:
    int num;
    int c;
    int flag = 0;

public:
    void set_data()
    {
        cout << "Enter the no to be checked ";
        cin >> num;
        cout << "enter the choice for type of checking to be done within 1 to 4";
        cin >> c;
    }

    void display()
    {
        switch (c)
        {
        case 1:
            int i;
            int f;
            f = 1;
            for (i = 1; i <= num; i++)
            {
                f = f * i;
            }
            cout << "the factorial of the no is " << f;
            break;

        case 2:
            
            for (i = 2; i <= num / 2; i++)
            {
                if (num % i == 0)
                {
                    cout << "Number is not Prime." << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "Number is Prime." << endl;
                break;
        case 3:
            if (num % 2 == 0)
            {
                cout << "the no is a even no";
            }
            else
            {
                cout << "the no is an odd no";
            }
            break;

        case 4:
            exit(0);
            break;
        }
    }
};

main()
{
    Number d1;
    d1.set_data();
    d1.display();
    return 0;
}        