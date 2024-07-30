#include<iostream>
using namespace std;
class Unaryoperator{
	int a;
	public:
		void getdata(){
			cout<<"Enter the  value of a : ";
			cin>>a;
			
		}
		void putdata(){
			cout<<a;
		}
		void operator++(){
			a=a+1;
		}
};
int main(){
	Unaryoperator aa;
	aa.getdata();
	aa.putdata();
//	aa++;
	++aa;
	aa.putdata();
	return 0;
	
	
}
