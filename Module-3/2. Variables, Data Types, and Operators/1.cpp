/*Write a C++ program that demonstrates the use of variables and constants. 
Createvariables of different data types and perform operations on them.
objective: Understand the difference between variables and constants.*/
#include<iostream>
using namespace std;
int main()
{
	const int num1 = 10;
	const long num2 = 320000;
	const double d1 = 2.456789;
	const float f1 = 2.4;
	const char ch = 'A';
	const string str = "hello world!";
	const bool b1 = true;
	const bool b2 = false;
	
	cout<<"\nthe value of num1 = "<<num1;
	cout<<"\nthe value of num2 = "<<num2;
	cout<<"\nthe value of d1 = "<<d1;
	cout<<"\nthe value of f1 = "<<f1;
	cout<<"\nthe value of ch = "<<ch;
	cout<<"\nthe value of string = "<<str;
	cout<<"\nthe value of b1 = "<<b1;
	cout<<"\nthe value of b2 = "<<b2;
	
	return 0;
}
