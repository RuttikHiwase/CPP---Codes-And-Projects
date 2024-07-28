#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,20,30,40,50,60,70,80,90,100};
	int i,l=0,h=9,key,mid;
	cin>>key;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(arr[mid]== key)
		{
			cout<<"Element found at "<<mid;
			return 0;
		}
		else if(arr[mid]> key)
		      h=mid-1;
		else 
		    l=mid+1;      
	}
	cout<<"The Element not found";
}
