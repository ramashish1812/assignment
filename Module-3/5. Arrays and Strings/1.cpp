/*Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.
Objective: Understand basic array manipulation.*/
#include<iostream>
using namespace std;
int main()
{
	int i,a[100],b[100],ans[100],size,sum=0;
	cout<<"\nenter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nenter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		cout<<"\nenter the element in b["<<i<<"] = ";
		cin>>b[i];
	}
	for(i=0;i<size;i++)
	{
		ans[i] = a[i]+b[i];
	}
	for(i=0;i<size;i++)
	{
		cout<<"\naddition is = "<<ans[i];	
	}	
	for(i=0;i<size;i++)
	{
		sum = sum + ans[i];
	}
	cout<<"\nsum is = "<<sum;
	cout<<"\navrage = "<<(float)sum/(float)size;
	
	return 0;
}
