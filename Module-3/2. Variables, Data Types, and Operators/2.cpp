/*Write a C++ program that performs both implicit and explicit type conversions andprints the results. 
Objective: Practice type casting in C++.*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,ans;
	cout<<"enter the number1 = ";
	cin>>num1;
	cout<<"enter the number2 = ";
	cin>>num2;
	
	ans= num1/num2;
	
	cout<<"\nimlicit = "<<ans;
	cout<<"\nexplicit = "<<(float)num1/(float)num2;
		
	return 0;
}
