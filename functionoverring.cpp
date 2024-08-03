#include<iostream>
using namespace std;
class Base{
	public:
	void display(){
		cout<<"Base class display function called ";
	}
};
class Derived:public Base{
	public:
	void display()
	{
	
	cout<<"Derived class display function called ";
}
};
int main(){
	Derived d;
	d.display();
	
}
