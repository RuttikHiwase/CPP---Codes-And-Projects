// Virtual Fuctions
#include<iostream>
using namespace std;
class A{
	public:
   virtual void display(){// by giving vitual keyword it is pointing derived class
		cout<<"Base Class ";
		
	}
};
class B:public A{
	public:
	void display(){
		cout<<"Derieved Class ";
	}
};
int main(){
	A *bptr;
//	A aa; 
    B aa;//derived class obj stored in base class pointer variable
	bptr = & aa;//
	bptr->display();
	return 0;
}
