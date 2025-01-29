/*Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). 
The main function should call these based on user input. Objective: Practice defining and using functions in C++.*/
#include<iostream>
using namespace std;
int addtion(int num1,int num2)
{
	return num1 + num2;
}
int subtraction(int num1,int num2)
{
	return num1 - num2;
}
int multipliction(int num1,int num2)
{
	return num1 * num2;
}
double division(double num1,double num2)
{
	return num1/num2;
}

int main()
{		
	int num1,num2,ch;
	cout<<"enter the number 1 = ";
	cin>>num1;
	cout<<"enter the number 2 = ";
	cin>>num2;
	cout<<"enter the choice = ";
	cin>>ch;
	
	switch(ch)
		{
			case 1:
				 cout<<"\naddtion is = "<<addtion(num1,num2);
			break;
			case 2:
				cout<<"\nsubtraction is = "<<subtraction(num1,num2);
			break;
			case 3:
				cout<<"\nmultipliction is = "<<multipliction(num1,num2);
			break;
			case 4:
				cout<<"\ndivision is = "<<division(num1,num2);
			break;
			default:("\ninvalide value!");
		}
	return 0;
}
