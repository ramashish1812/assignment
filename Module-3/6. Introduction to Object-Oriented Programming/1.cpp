/*Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. 
Create objects to use these functions. Objective: Introduce basic class structure.*/
#include<iostream>
using namespace std;
class Demo
{
	private:
		int n1;
		int n2;
		public:
			Demo(int n1,int n2)
			{
				this->n1=n1;
				this->n2=n2;
			}
			void display()
			{
				cout<<"\naddition is = "<<n1+n2;
				cout<<"\nsubtraction is = "<<n1-n2;
				cout<<"\nmultiplication is = "<<n1*n2;
				cout<<"\ndivision is = "<<(double)n1/(double)n2;
			}
};
int main()
{	

	int n1,n2;
	cout<<"\nenter the n1 = ";
	cin>>n1;
	cout<<"\nenter the n2 = ";
	cin>>n2;
	Demo d(n1,n2);
	d.display();
	return 0;
}

