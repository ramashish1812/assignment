/*Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. 
Perform operations using each type of operator and display the results. 
Objective: Reinforce understanding of different types of operators in C++*/
/*Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter the value of num1 = ";
	cin>>num1;
	cout<<"enter the value of num2 = ";	
	cin>>num2;
	
	cout<<"\narithmetic operater";
	cout<<"\n===================";	
	cout<<"\naddtion is = "<<num1+num2;
	cout<<"\nsubtraction is = "<<num1-num2;
	cout<<"\nremender is = "<<(float)num1/(float)num2;
	cout<<"\ndivison is = "<<num1%num2;
	cout<<"\nmultipliction is = "<<num1*num2;
	
	cout<<"\n\nrelational operater";
	cout<<"\n===================";
	if(num1>num2)
	{
		cout<<"\n"<<num1<<" is a biggest number";	
	}
	if(num1<num2)
	{
		cout<<"\n"<<num2<<" is a biggest number";
	}
	if(num1==num2)
	{
		cout<<"\nboth are same value";
	}
	if(num1!=num2)
	{
		cout<<"\nnot a same value";
	}
	if(num1<=num2)
	{
		cout<<"\nboth are same value";
	}
	if(num1>=num2)
	{
		cout<<"\nboth are same value";
	}
	
	cout<<"\n\nlogical operater";
	cout<<"\n================";
	int num3;
	cout<<"\nenter the value of num3 = ";
	cin>>num3;
	if(num1>num2 && num1>num3)
	{
		cout<<"\n"<<num1<<" is biggest number";
	}
	if((num1>num2 && num1<=num2) || (num1<=num2 && num3>num1));
	{
		cout<<"\nboth are same value";
	}
	if (!num1>num2 && num1>num2)
	 {
		cout<<"\nBoth values are greater than";
	}
	
	cout<<"\n\nbitwise operater";
	cout<<"\n================";
	if(num1>num2 & num1>num3)
	{
		cout<<"\n"<<num1<<" is biggest number";
	}
	if((num1>num2 & num1<=num2) | (num1<=num2 & num3>num1));
	{
		cout<<"\nboth are same value";
	}
	if (!num1>num2 & num1>num2)
	 {
		cout<<"\nBoth values are greater than";
	}
	return 0;
}

