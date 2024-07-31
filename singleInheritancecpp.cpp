#include<iostream>
using namespace std;
class Base{
	public:
		show()
		{
			cout<<" hello";
		}
	
};
class Derived:public Base{
	public:
		Display()
		{
			cout<<"Hi";
		}
};
int main()
{
	Derived d;
	d.show();
	d.Display();
}
