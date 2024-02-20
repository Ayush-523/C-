#include<iostream>
using namespace std;
void divide(double x, double y)
{
cout<<"Inside function \n";
try{

if(y==0.0) throw (double)y;
else
cout<<"\ndivision=\n"<<x/y;

}
catch(double y){

cout<<"\nCaught Double inside fun\n";
cout<<y;
throw;


}
cout<< "\nEnd of Function\n";
}
int main(){

cout<<"\nInside main function\n";
try{

divide(10.5, 2.0);
divide(20.0, 1.0);

}
catch(double)
{

cout<<"\ncaught double inside main\n";

}

cout<<"\nEnd of main\n";
}