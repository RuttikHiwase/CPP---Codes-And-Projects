#include<iostream>
using namespace std;
class demo{
	int a;
	public:
		void getdata(){
			cout<<"Enter the no ";
			cin>>a;
		}
		void putdata(){
			cout<<"Value"<<a;
		}
		demo operator+(demo bb)
		{
			demo cc;
			cc.a=a + bb.a;
			return cc;
		}
}; 

int main(){
	demo aa,bb,cc;
	aa.getdata();
	bb.getdata();
	cc=aa + bb;// cc-return type
	// aa- function 
	// bb- arguments
	cc.putdata();
	
}
