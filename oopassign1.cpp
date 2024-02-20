#include <iostream>
using namespace std;
class student
{
private:
    int roll, m1, m2, m3, m4, m5, m6; 
    float p, total; 
    char name[40], clas[8];
public:
    void getinfo()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter class : ";
        cin >> clas;
        cout << "Enter roll no. : ";
        cin >> roll;
    }
    void getmarks()
    {
        cout << "Enter marks of 6 subjects : ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5>>m6;
        p = 1.0 * (m1 + m2 + m3 + m4 + m5+m6) * 100 / 600 * 1.0;
    }
    void totalmarks()
    {
        cout << "total  marks is \n";
        int total = (m1 + m2 + m3 + m4 + m5+m6);
        cout << total;
    }
    void displaymarks()
    {
        cout << "Marks are : " << m1 << "\n"
             << m2 << "\n"
             << m3 << "\n"
             << m4 << "\n"
             << m5 << "\n"
             << m6 << endl;
        cout << "Percentage is : " << p << endl;
    }
};
int main()
{
    student s;
    s.getinfo();
    s.getmarks();
    s.displaymarks();
    s.totalmarks();
}