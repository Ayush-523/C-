#include<iostream>
using namespace std;

class Student{
	string name;
	int roll;
	int m1,m2,m3;
	public:
		Student()
		{
			cout<<"\nEnter name: "; cin>>name;
			cout<<"Enter roll: ";cin>>roll;
			cout<<"Enter MARKS:\n";
			cout<<"SUBJECT 1: ";cin>>m1;
			cout<<"SUBJECT 2: ";cin>>m2;
			cout<<"SUBJECT 3: ";cin>>m3;	
		}
		
		char grade(int temp)
			{
				if(temp>=90&&temp<100)
						return 'O';
				if(temp>=80&&temp<90)
						return 'E';
				if(temp>=70&&temp<80)
						return 'A';
				if(temp>=60&&temp<70)
						return 'B';
				if(temp>=50&&temp<60)
						return 'C';
				if(temp>=40&&temp<50)
						return 'D';
				if(temp<40)
						return 'F';
			}
		void grade_each_subject()
		{
				cout<<"\nSUBJECT 1: "<<grade(m1);
				cout<<"\nSUBJECT 2: "<<grade(m2);
				cout<<"\nSUBJECT 3: "<<grade(m3);			
		}
		void grade_student()
		{
				cout<<"\nEQUVALENT GRADE: "<<grade((m1+m2+m3)/3);
		}
		
		void IS_pass()
		{
				if(m1>40&&m2>40&&m3>40)
					cout<<"\nSTUDENT PASSED!!";
				else
					cout<<"\nSTUDENT FAILED!!!!";
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
	int n,i;
	cout<<"Enter total number of the student: ";
	cin>>n;
	Student obj[n];
	printf("\n\n\n");
	for(i=0;i<n;i++)
		{
			cout<<"\n\t\t=====STUDENT "<<i+1<<"=====\n";
			cout<<"GRADE OF THE STUDENT IN EACH SUBJECT: ";
				obj[i].grade_each_subject();
				obj[i].grade_student();
				obj[i].IS_pass();
				IS_Excellent(obj[i]);
		}
		
		cout<<"\n\n\n\n===================PROGRAM ENDED=====================";
		return 0;
}