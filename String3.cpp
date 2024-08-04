#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[30];
	cin>>s1;
	char s2[30];
	cin>>s2;
	strcat(s1,s2);
	cout<<s1<<endl;
}
