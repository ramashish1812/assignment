/*Write a C++ program that accepts user input for their name and age and thendisplays a personalized greeting. 
Objective: Practice input/output operations using cin and cout.*/
#include<iostream>
using namespace std;
int main()
{
	char name[100];
	int age;
	
	cout<<"enter the name = ";
	cin>>name;
	cout<<"enter the age = ";
	cin>>age;
	
	cout<<"\nperson name is = "<<name;
	cout<<"\nperson age is = "<<age;
	
	return 0;
}
