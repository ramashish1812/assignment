/*.8.3  Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage*/

#include<stdio.h>
struct employee
{
	int empno,age;
	char empname[100],address[100];	

};
int main()
{
	struct employee emp[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter your id number:");
	    scanf("%d",&emp[i].empno);
	    printf("\nEnter your name :");
	    scanf("%c",&emp[i].empname);
	    printf("\nEnter your age:");
	    scanf("%d",&emp[i].age);
	    printf("\nEnter your  address:");
	    scanf("%c",&emp[i].address);	
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nemp id no is %d",emp[i].empno);
		printf("\nemp name is %c",emp[i].empname);
		printf("\nemp age is %c",emp[i].age);
		printf("\nemp address is %c",emp[i].address);
		printf("\n");
	}
	return 0;
	
}

