/*Write a C++ program to display the multiplication table of a given number usingafor loop. 
Objective: Practice using loops*/
#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"enter the number = ";
	cin>>num;
	for(i=1;i<=10;i++)
	{
		cout<<"\n"<<num<<" x "<<i<<" = "<<num*i;
	}
	return 0;
}

