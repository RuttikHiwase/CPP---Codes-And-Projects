#include<iostream>
using namespace std;
int main()
{
	int n,r,sumofcube=0;
	cin>>n;
	int m=n;
	while(n>0)
	{
		r=n%10;
		n/=10;
		sumofcube=sumofcube + r*r*r;
	}
	if(sumofcube == )
	{
		cout<<"Number is Armstrong";
	}
	else
	    cout<<"Number is not Armstrong";
}
