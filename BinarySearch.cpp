#include<iostream>
using namespace std;
int main()
{
	int key,i;
	int arr[5]={10,20,30,40,50};
	cin>>key;
	int l=0,h=4,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(arr[mid] == key)
		{
		
		cout<<"Element fount at index"<<mid;
		return 0;
	    }
	    else if (arr[mid] > key)
	         h=mid-1;
	    else
		     l=mid+1;     
	
	}
	cout<<"Element not found";
}
