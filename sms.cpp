#include<iostream>
using namespace std;
class Student{
	private:
	string name;
	int rollno;
	long mobileno;
	public:
		 
        Student(){
            this->name = "";
            this->rollno= 1;
            this->mobileno = 0;
             
        }
        Student(string name,int rollno,long mobileno)
        {
        	this->name=name;
        	this->rollno=rollno;
        	this->mobileno=mobileno;
		}
		string getname(){
			return this->name;	
		}
		void setname(){
			this->name=name;
		}
		
		int getrollno(){
			return this->rollno;
		}
		
		void setrollno(){
			this->rollno=rollno;
		}
		
		long mobileno(){
			return this->mobileno;
		}
		void setmobileno(
		
		
		)
		
};
class Course:Student{
	string coursename;
	double fees;
	Course(){
		this->coursename="";
		this->fees=0;
	}
	Course(string coursename,double fees)
	{
		this->coursename=coursename;
		this->fees=fees;
	}
};
int main(){
	Course c;
	c.
}
