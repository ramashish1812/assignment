//10. WAP to perform Palindrome number using for loop and function 
#include<stdio.h>
int pallin();
int main()
{
	int result;
	result=pallin();
	printf("\n",result);
	return 0;
}
int pallin()
{
	
	int num,rem,rev,i;
	printf("\nEnter The Number  = ");
	scanf("%d",&num);
	int copy = num;
	for(i=num;i!=0;i=i/10)
	{
		rem=i%10;
		rev=rev*10+rem;
	}
		if(rev==copy)
	{
		printf("\n%d Is The Pallindrome Number",copy);
	}
	else
	{
		printf("\n%d Is Not The Pallindrome Number",copy);
	}
	
	return rev;
}

