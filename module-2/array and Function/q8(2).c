/*8.2  Write a program of structure employee that provides the following.
	a. information -print and display empno, empname, address andage*/
	
	struct employee{
	int age,empno;
	char address[100],empname[100];

};

int main()
{
	struct employee E1;
	
	printf("Enter Empno:");
	scanf("%d",&E1.empno);
	printf("Enter Empname :");
	scanf("%c",&E1.empname);
	printf("Enter Address:");
	scanf("%c",&E1.address);
	printf("Enter age:");
	scanf("%d",&E1.age);
	
	printf("\nEmp number = %d",E1.empno);	
	printf("\nEmp number = %c",E1.empname);
	printf("\nEmp number = %c",E1.address);
	printf("\nEmp number = %c",E1.age);

	return 0;
}

