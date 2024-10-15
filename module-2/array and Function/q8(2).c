/*8.2  Write a program of structure employee that provides the following.
	a. information -print and display empno, empname, address andage*/
	
	struct employee{
	int empno;
	char empname[100];
	char address[100];
	int age;
};

int main()
{
	struct employee E1;
	
	printf("Enter Empno:");
	scanf("%d",&E1.empno);
	
	printf("Enter Empname :");
	scanf("%s",&E1.empname);
	
	printf("Enter Address:");
	scanf("%s",&E1.address);
	
	printf("Enter age:");
	scanf("%d",&E1.age);
	
	printf("\nEmp number = %d",E1.empno);	
	printf("\nEmp number = %s",E1.empname);
	printf("\nEmp number = %s",E1.address);
	printf("\nEmp number = %d",E1.age);

	return 0;
}

