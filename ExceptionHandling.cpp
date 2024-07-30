#include<iostream>
using namespace std;
//Exception Handling
int main(){
	int x,y,z;
	x=9,y=1;
	try{
		if(y==0)
		 throw 1;
		z=x/y;
		cout<<z<<endl; 
	}
	catch(int e){
		cout<<"Division by zero";
	}
}
