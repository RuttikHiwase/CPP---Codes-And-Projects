#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length;
		int bredth;
	public:
		Rectangle(){
			length=1;
			bredth=1;
		}
		Rectangle(int l,int b){
			setlength(l);
			setbredth(b);
		
		}
		Rectangle(Rectangle &r){
			length=r.length;
			bredth=r.bredth;
		}
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
	Rectangle r1(10,30);
	Rectangle r2(r1);
//	cout<<r1.Area()<<" ";
	cout<<r2.Area()<<" ";
}
