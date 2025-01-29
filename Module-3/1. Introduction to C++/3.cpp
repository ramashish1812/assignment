/*Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle,
and another using Object-Oriented Programming (OOP) withaclass and object for the same task.
Objective: Highlight the difference between POP and OOP approaches.*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int width,length,area;
	
	printf("----------pop language----------");
	printf("\n\nenter the length = ");
	scanf("%d",&length);
	printf("enter the width = ");
	scanf("%d",&width);
	
	area = width*length;
	
	printf("area of a rectangle = %d",area);
	
	cout<<"\n\n----------pop language----------";
	cout<<"\n\nenter the length = ";
	cin>>length;
	cout<<"enter the width = ";
	cin>>width;
	
	area = width*length;
	
	cout<<"area of a rectangle = "<<area;
	
	return 0;
}
