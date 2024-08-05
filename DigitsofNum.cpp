#include<iostream>
// Display the digits of number
using namespace std;
int main()
{
	int n,r=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		r=n%10;
		n=n/10;
		cout<<r<<"  ";
	}
	
}
