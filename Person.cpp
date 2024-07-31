#include<iostream>
using namespace std;
class Person{
	int id;
	string name;
	public:
		//Person(){
		//	id=1111;
		//	name="hello world";
	//	}
		//~Person();
		void set_personinfo(){
			cout<<"Enter the id "<<endl;
			cin>>id;
			cout<<"Enter the name "<<endl;
			cin>>name;
		}
		void display_personinfo()
		{
			cout<<"The ID is :  "<<id<<endl;
			cout<<"The Name is : "<<name<<endl;
		}
		
};
class student:private Person{
	string course;
	int fees;
	public:
		student(){
			course="DAC";
			fees=100000;
		}
		~student(){
			
		}
		void set_course(){
			cout<<"Enter the course "<<endl;
			cin>>course;
			cout<<"Enter the course "<<endl;
			cin>>fees;
			
		}
			void display_studentinfo()
		{
			cout<<"The ID is :  "<<course;
			cout<<"The Name is : " <<fees;
		}
		
};
class Emp:public Person{
	string dept;
	int salary;
	public:
		
			void set_empinfo(){
			cout<<"Enter the department "<<endl;
			cin>>dept;
			cout<<"Enter the salary "<<endl;
			cin>>salary;
			
		}
			void display_empinfo()
		{
			//cout<<"The name is : "<<name<<endl;
			//cout<<"The id is : "<<id<<endl;
			cout<<"The dept is :  "<<dept<<endl;
			cout<<"The salary is : "<<salary<<endl;
		}
		
};
int main(){
   Emp e;
   e.set_empinfo();
   e.display_empinfo();
}
