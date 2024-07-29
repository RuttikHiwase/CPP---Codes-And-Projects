#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length;
		int bredth;
	public:
		void setlength(int l)
		{
			if(l>0)
			{
				length=l;
			}
			else 
			  length=0;
		}
		int getlength()
		{
			return length;
		}
		void setbredth(int b)
		{
			bredth=b;
		}
		int getbredth()
		{
			return bredth;
		}
		int Area()
		{
			return length * bredth;
		}
		int Perimeter()
		{
			return length + bredth;
		}
};
int main()
{
	Rectangle r;
	r.setlength(5);
	r.bredth(10);
	cout<<r.Area()<<endl;
	cout<<r.Perimeter()<<endl;
	cout<<r.getlength()<<endl;
	cout<<r.getbredth()<<endl;
}
