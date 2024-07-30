#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int img;
	public:
		void display()
		{
			cout<<real<<"+i"+img;
		}
			
};
int main(){
	complex c1(3,7)
	int x=10;
	cout<<x;
	c1.display();
	cout<<c1;
}
