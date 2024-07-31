#include<iostream>
using namespace std;
class Array{
	int size;
	int *arr;
	public:
		//default constructor
		Array();
		Array(int a);
		Accept();
		Display();
		~Array();
		Array(Array &); };
		
		Array::Array(){
			size=5;
        	arr=new int[size];
	        for(int i=0; i<size; i++)
	        	arr[i]=0;
		}
		Array::Array(int a)
		{
			size=a;
			arr=new int[size];
			for(int i=0;i<size;i++)
			{
				arr[i]=0;
			}
		}
		//Copy constructor
		Array::Array(Array &a)
		{
			size=a.size;
			arr=new int[size];
			for(int i=0;i<size;i++)
			{
				arr[i]=a.arr[i];
			}
		}
		Array::~Array()
		{
			delete []arr;
		}
	  Array:: Accept()
	  {
	  	cout<<"Enter array elements:"<<endl;
	for(int i=0; i<size; i++){
	
		cin>>arr[i];
	  }
	  }
	  Array:: Display()
	  {
	  	cout<<"Array elements:"<<endl;
	for(int i=0; i<size; i++){
	
		cout<<arr[i]<<"  ";
	cout<<endl;
	  }
		
}
int main(){
	Array a1(9);
// Array a1; // it calls the default contructor
	a1.Accept();
	a1.Display();
	return 0;
	
	
}
