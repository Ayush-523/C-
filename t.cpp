#include<iostream>
#include<math.h>
using namespace std;
float s;
class circle
{
	public:
    float x,y,r;
    circle()
    {
        x=y=r=0;
    }
    circle(int x1,int y1,int r1)
    {
    	x=x1;
    	y=y1;
    	r=r1;
	}
	circle(circle &t)
	{
		x=t.x;
		y=t.y;
		r=t.r;
	}
	void intersect(circle c1,circle c2)
	{
		float r=c1.r+c2.r;
		if(s<r)
		{
			cout<<"Intersecting";
		}
		else
		{
			cout<<"Notintersecting";
		}
	}
	private:
	friend void Distance(circle ,circle);

};
void Distance(circle c1,circle c2)
{
	float dis=pow((c1.x-c2.x),2)+pow((c1.y-c2.y),2);
	s=sqrt(dis);
	cout<<"The distance between two circle is "<<s<<endl;
}

int main()
{
	circle c1(10,20,3),c2(20,30,4),c;
	circle c3=c1;
	Distance(c1,c2);
	c.intersect(c1,c2);
    return 0;
}