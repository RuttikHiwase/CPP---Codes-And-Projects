#include<iostream>
using namespace std;
//Find the sum of all digit of a positive integer.
int main()
{
	int n,rev=0,rem,sum=0;
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		rev=rev*10+rem;
		n=n/10;
	}
	cout<<sum;
}
