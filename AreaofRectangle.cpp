#include<iostream>
using namespace std;
class Rectangle
{
	public:
		int length;
		int bredth;
		int Area()
		{
			return length*bredth;
		}
		int Perimeter()
		{
			return length + bredth;
		}
};
int main()
{
	Rectangle r1,r2;
	r1.length=10;
	r1.bredth=50;
	cout<<r1.Area()<<endl;
	r2.length=20;
	r2.bredth=50;
	cout<<r2.Perimeter()<<endl;
}
