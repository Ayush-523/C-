#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual float area()
        {
            return 0.0;
        }
};

class Circle:public Shape
{
    private:
        float radius;
    public:
        Circle(float r):radius(r){}
        float area()
        {
            return 3.14*radius*radius;
        }
};

class Square:public Shape
{
    private:
        float side;
    public:
        Square(float s):side(s){}
        float area()
        {
            return side*side;
        }
};

class Triangle:public Shape
{
    private:
        float base, height;
    public:
        Triangle(float b,float h):base(b),height(h){}
        float area()
        {
            return 0.5*base*height;
        }
};

int main()
{
    Shape *s1;
    Circle c(2.0);
    Square s(5.0);
    Triangle t(4.0, 3.0);

    s1=&c;
    cout<<"Circle area: "<<s1->area()<<endl;

    s1=&s;
    cout<<"Square area: "<<s1->area()<<endl;

    s1=&t;
    cout<<"Triangle area: "<<s1->area()<<endl;
    return 0;
}