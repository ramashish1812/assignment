/*Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope. Objective: Reinforce the concept of variable scope.*/
#include<iostream>
using namespace std;
int globalvar = 10;
void  localscop()
{	
	int localvar = 20;
	cout<<"\n\nglobalvar = "<<globalvar;
	cout<<"\nlocalvar = "<<localvar;	
}
void globalscop()
{
	globalvar = globalvar + 4;
	cout<<"\n\nafter globalvar = "<<globalvar;
}
int main()
{
	int localvar = 30;
	cout<<"\n\nlocalvar = "<<localvar;
	cout<<"\nglobalvar = "<<globalvar;
	
	localscop();
	globalscop();
	
	cout<<"\n\naftet globalvar = "<<globalvar;
	return 0;
}
