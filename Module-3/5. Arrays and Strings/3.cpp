/*Write a C++ program to check if a given string is a palindrome (reads the sameforwards and backwards). 
Objective: Practice string operations*/
#include<iostream>
using namespace std;
int main()
{
	int size,i,temp;
	string str1,str2;
	
	cout<<"\nenter the str1 = ";
	cin>>str1;
	
	str2 = str1;
	
	size = str1.length();
	for(i=0;i<size/2;i++)
	{
		temp = str1[i];
		str1[i] = str1[size-1-i];
		str1[size-1-i]=temp;
	}
	
	cout<<"\noriginal value = "<<str2;
	cout<<"\nrevesed value = "<<str1;
	
	if(str1==str2)
	{
		cout<<"\n\nthis is a pallidrome number";
	}
	else
	{
		cout<<"\n\nthis is not a pallidrome number";
	}
	return 0;
}
