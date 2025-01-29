/*Write a program that implements inheritance using a base class Person andderivedclasses Student and Teacher.
Demonstrate reusability through inheritance. Objective: Learn the concept of inheritance*/
#include<iostream>
using namespace std;
class Person
{
	private:
		string name;
		int age;
		public:
			Person(string n,int a)
			{
				name = n;
				age = a;
			}
			void get()
			{
				cout<<"\nname = "<<name;
				cout<<"\nage = "<<age;
			}
};
class Student : public Person
{
	
};
class Teacher : public Person
{
	
};
int main()
{
	string name;
	int age;	
	cout<<"\nenter the name = ";
	cin>>name;
	cout<<"\nenter the age = ";
	cin>>age;
	
	Person p(name,age);
	p.get();

	return 0;
}
