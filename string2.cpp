#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char *str;
	cout<<"Enter a string";
	cin.getline(str,50);
//	cout<<str<<endl;	
	cout<<"lengtht : "<<strlen(str)<<endl;
}

