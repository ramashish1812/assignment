/*3. WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there 
b. How many odd numbers are there 
c. Sum of even numbers 
d. Sum of odd numbers*/
#include<stdio.h>
int main()
{
	int i,a,esum=0,ecount=0,osum=0,ocount=0;
	for(i=1;i<=10;i++)
	{
		printf("enter %d number =",i);
		scanf("%d",&a);
		if(a%2==0)
		{
			ecount++;
			esum += a;
			 
		}
		else
		{
			ocount++;
			osum += a;
		}
	}
	printf("\nTotal number of EVEN number is %d",ecount);
	printf("\nSum of even number is %d",esum);
	printf("\nTotal number of ODD number is %d",ocount);
	printf("\nSum number of odd number is %d",osum);
	return 0;
}
