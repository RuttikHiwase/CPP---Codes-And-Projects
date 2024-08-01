#include<iostream>
using namespace std;
class Assignment{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
			cout<<"Enter the value of b : ";
			cin>>b;
			
		}
		void putdata(){
			cout<<"value of a : "<<a<<endl;
			cout<<"value of b : "<<b<<endl;
		}
		void operator--(int){
			a=a-1;
			
		}
};
int main(){
	Assignment aa;
  	aa.getdata();
	aa.putdata();
//	aa++;
//	aa.putdata();
//	++aa;
   // --aa;
   aa--;
	aa.putdata();
	
}
