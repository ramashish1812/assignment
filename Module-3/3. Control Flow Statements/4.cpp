/*Write a program that prints a right-angled triangle using stars (*) with a nestedloop.
Objective: Learn nested control structures. */
#include<iostream>
using namespace std;
int main()
{
	int row,i,j,k;
	cout<<"enter the row = ";
	cin>>row;
	int spc=row-1;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=spc;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
		spc--;
	}
	return 0;
}
