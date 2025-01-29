/*Write a C++ program that asks the user to guess a number between 1 and 100.
Theprogram should provide hints if the guess is too high or too low. Use loops toallowthe user multiple attempts. 
Objective: Understand while loops and conditional logic.*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{ 
	srand(time(0));
	int n,randomnum,num;
	
	n=rand()%100;
	cout<<"\nrandom number = "<<n;
	randomnum=n;
		
	while(true)
	{
		cout<<"\n\nenter the number = ";
		cin>>num;
		
		if(num<randomnum)
		{
			cout<<"number is a low. pls try again";
		}
		else if(num>randomnum)
		{
			cout<<"number is a high. pls try again";
		}
		else
		{
			cout<<"Congratulations. random number is a correct";
			break; 
		}
	}
	return 0;
}


