#include<iostream.h>
using namespace std;
class account
{
	private :
		string name;
		int accno;
		string atype;
		
	public :
	void getAccountDetails()
	{
		cout<<"\n Enter Customer Name : ";
		cin>>name;
		cout<<"Enter the Account Number : ";
		cin>>accno;
		cout<<"Enter the AccountType";
		cin>>atype;
		
		}	
		void displayDetails()
		{
			cout<<"\n\n Customer Name : "<<name;
			cout<<"\n Account Number : "<<accno;
			cout<<"\n Account Type  : "<<atype;
		}
	};
	class current_account : public account
	{
		private :
			float balance;
		public :
		void c_display(){
			cout<<"\n Enter Amount to deposit ";
			cin>>deposit;
			balance=balance + deposit;
		}	
		
		void c_withdraw(){
			cout<<"\n Enter the Amount to Withdraw";
			cin>>withdraw;
		     if(balance > 1000)
		     {
		     	balance = balance - withdraw;
		     	cout<<"\n Balance Amount After Withdraw :"<<balance;
			 }
			 else
			 {
			 	cout<<"\n Insufficient Balance";
			 }
		}
	}
		
		
		
		
}
