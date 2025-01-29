/*Write a C++ program to perform matrix addition on two 2x2 matrices. 
Objective: Practice multi-dimensional arrays.*/
#include<iostream>
using namespace std;
int main()
{
	int row,col,a[100][100],b[100][100],ans[200][200],i,j;
	cout<<"\nenter the row = ";
	cin>>row;
	cout<<"\nenter the col = ";
	cin>>col;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\nenter the element in a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\nenter the element in b["<<i<<"]["<<j<<"] = ";
			cin>>b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			ans[i][j] = a[i][j] + b[i][j]; 
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\naddition is = "<<ans[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}
