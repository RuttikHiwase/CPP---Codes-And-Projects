#include<iostream>
using namespace std;
class assignment{
	int a;
	public:
		void getdata()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
		
			
		}
		void putdata(){
			cout<<"value of a : "<<a<<endl;
		
		}
		assignment operator+(assignment bb){
			assignment cc;
			cc.a=a + bb.a;
			return cc;
		}
		
};
int main(){
	assignment aa,bb,cc;
	aa.getdata();
	bb.getdata();
	cc=aa+bb;
	cc.putdata();
  	

	
}
