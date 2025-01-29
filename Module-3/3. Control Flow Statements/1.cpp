/*Write a C++ program that takes a student’s marks as input and calculates the gradebased on if-else conditions. 
Objective: Practice conditional statements (if-else).*/
#include<iostream>
using namespace std;
int main()
{
	double roll,english,maths,science;
	string name;
	cout<<"\nenter the roll = ";
	cin>>roll;
	cout<<"\nenter the name = ";
	cin>>name;
	cout<<"\nenter the marks of english = ";
	cin>>english;
	cout<<"\nenter the marks of maths = ";
	cin>>maths;
	cout<<"\nenter the marks of science= ";
	cin>>science;
	
	cout<<"\nroll number = "<<roll;
	cout<<"\nname = "<<name;
	int total = english+maths+science;
	cout<<"\ntotal marks = "<<total;
	cout<<"\npercentage = "<<(double)total/(double)3;
	double per = (double)total/(double)3;

	cout<<"\ngrade = ";
	if(per>=1 && per<=45)
	{
		cout<<"C";
	}
	else if(per>45 && per<=80)
	{
		cout<<"B";
	}
	else
	{
		cout<<"A";
	}
	return 0;
}

