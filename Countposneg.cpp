#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,20,30,-30,-2,40,-100,50};
	int i;
	int pos=0,neg=0;
	for(i=0;i<8;i++)
	{
		if(arr[i] > 0)
		{
			pos++;
		}
		else
		   neg++;
	}
	cout<<"The number of positive numbers"<<pos<<endl;
	cout<<"The number of negative numbers"<<neg;
}
