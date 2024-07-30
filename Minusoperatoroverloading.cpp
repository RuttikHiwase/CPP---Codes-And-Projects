#include<iostream>
using namespace std;
class demo{
	int a;
	public :
		void getdata(){
			cout<<"Enter the value of a :";
			cin>>a;
			
		}
		void putdata(){
			cout<<a;
		}
		demo operator-(demo bb){
		 demo cc;
		 cc.a=a-bb.a;
		 return cc;	
		}
};
int main(){
	demo aa,bb,cc;
	aa.getdata();
	bb.getdata();
	cc=aa-bb;
	cc.putdata();
	
}
