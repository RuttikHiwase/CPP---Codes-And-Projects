//Find the first digit in a positive integer.
#include <iostream>
using namespace std;
int main()
{
	int n,reversed_number=0,remainder;
	cin>>n;
	int i=1;
    while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  cout<<reversed_number;
}
