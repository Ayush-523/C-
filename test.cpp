#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    int m1,m2,m3;
    public:
    void getdata()
    {
        cout<<"enter name of student";
        cin>>name;
        cout<<"enter roll no";
        cin>>rollno;
        cout<<"enter marks of 3 subjects";
        cin>>m1>>m2>>m3;
    }
    void calgrade()
    {
        int sum=0,avg=0;
        char grade;
        sum=m1+m2+m3;
        avg=sum/3;
        if(avg>=90 && avg<=100)
        {
            grade="O";
        }
        elseif(avg>=80 && avg<=89)
        {
            grade="E";
        }
        elseif(avg>=70 && avg<=79)
        {
            grade="A";
        }
        elseif(avg>=60 && avg<=69)
        {
            grade="B";
        }
        elseif(avg>=50 && avg<=59)
        {
            grade="C";
        }
        elseif(avg>=40 && avg<=49)
        {
            grade="D";
        }
    }
    void display()
    {
        cout<<"The grade of the respective student is:";
        cout<<grade;
    }
    void Is_pass()
    {
         if(m1<=39 && m2<=39 && m3<= 39)
         {
            cout<<"The student has failed in one subject";
         }
    }
    friend void IS_Excellent(Student obj);
};
void IS_Excellent(Student obj)
		{
			if(obj.m1>80&&obj.m2>80||obj.m2>80&&obj.m3>80||obj.m3>80&&obj.m1>80)
					cout<<"\nstudent is Excellent!!";
				else
					cout<<"\nStudent is not that execelent";
		}

int main()
{
    cout<<"Enter total number of the student: ";
	cin>>n;
	student obj[n];
	printf("\n\n\n");
	for(i=0;i<n;i++)
		{
			cout<<"\n\t\t=====STUDENT "<<i+1<<"=====\n";
			cout<<"GRADE OF THE STUDENT IN EACH SUBJECT: ";
				obj[i].getdata();
				obj[i].calgarde();
				obj[i].IS_pass();
				IS_Excellent(obj[i]);
		}
		
}