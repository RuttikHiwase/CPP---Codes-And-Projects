#include<iostream>
using namespace std;
class Employee{
	
	int emp_id;
	string name;
	int dob;
	public:
		void getinfo(){
		
	cout<<"Enter the id : ";
	cin>>emp_id;
	cin.ignore();
	cout<<"Enter the name : ";
	getline(cin,name);
	cin.ignore();
	cout<<"The dob";
	cin>>dob;
	
}
void display(){
		cout<<"Enter the id : "<<emp_id<<endl;
			
			cout<<"Enter the name : "<<name<<endl;
			
			cout<<"Enter the date : "<<dob<<endl;}
		
};
class WageEmployee : public Employee{
	protected:
	int numhours;
	int rateprhour;
	public:
	double salofwageemp;
		void getwageinfo(){
			cout<<"Enter the number of hours : ";
			cin>>numhours;
			cout<<"Enter the rateprhour : ";
			cin>>rateprhour;
		}
	WageEmployee()
		{
			numhours=1;
			rateprhour=1;
		}
	WageEmployee(int numhrs,int rathour)
		{
			numhours=numhrs;
			rateprhour=rathour;
		}
	void calsal(){
		       salofwageemp = numhours * rateprhour;
		}
		void display1(){
			cout<<"The calsal is : " <<salofwageemp;
		}
};
class SalesPerson : public WageEmployee {
	int numitemsold;
	int commission;
	public:
		double salaryofsalper;
		void getsalesinfo(){
			cout<<"Enter the numitemsold : ";
			cin>>numitemsold;
			cout<<"Enter the commission : ";
			cin>>commission;
		}
		SalesPerson()
		{
			numitemsold=1;
			commission=1;
		}
		SalesPerson(int numitem,int comm){
			numitemsold=numitem;
			commission=comm;
			
		}
	void calsals(){
	//	cout<<"SalesPersonsSalary : ";
			 salaryofsalper=  numhours * rateprhour + commission * numitemsold;
		}
		
		int display2()
		{
			cout<<"Salofsalesperson : "<<endl;
			 cout<<salaryofsalper<<endl;
		}
};
int main(){
	SalesPerson sp;
	sp.getinfo();//	cout<<sp.display()<<endl;
	sp.display();
	sp.getwageinfo();
	sp.calsal();
	sp.display1();
	sp.getsalesinfo();
	sp.calsals();
	sp.display2();
}
