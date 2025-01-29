/*Create a class BankAccount with data members like balance and member
functions like deposit and withdraw. Implement encapsulation by keeping thedata members private*/
#include<iostream>
using namespace std;
class Bankaccount
{
	private:
		double account;
		double balance;
		public:
			 Bankaccount(double a,double b)
			{
				account = a;
				balance = b;
			}
			void deposit(double d)
			{
				balance = balance + d;
			}
			void withdraw(double w)
			{
				if(w<balance)
				{
					balance = balance - w;
				}
				else
				{
					cout<<"\nwithraw is not posibale";
				}
			}
			void get()
			{
				cout<<"\naccount = "<<account;
				cout<<"\nbalance = "<<balance;
			}
};
int main()
{
	double account;
	double balance;
	double deposit;
	double withdraw;
	cout<<"\nenter the account number = ";
	cin>>account;
	cout<<"enter the bank balance = ";
	cin>>balance;
	cout<<"\nenter the deposit = ";
	cin>>deposit;
	cout<<"\nenter the withrow = ";
	cin>> withdraw;
	
	Bankaccount b(account,balance);
	b.deposit(deposit);
	b.withdraw(withdraw);
	b.get();
	
	return 0;
}
