#include<iostream>
using namespace std;
int main()
{
	//Find the sum of all digit of a integer (both positive and negative).
	int n,rev=0,rem,sum=0;
	if(n<0)
	{
		n * (-1);
		return n;
	}
	
	
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
