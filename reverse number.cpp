#include<iostream>
using namespace std;
int main()
{
	int n,reversedNumber=0,remainder;
	cout<<"enter an integer:";
	cin>>n;
	while(n!=0)
	{
		remainder=n%10;
		reversedNumber=reversedNumber*10+remainder;
		n/=10;
	}
	cout<<"reversedNumber="<<reversedNumber;
	return 0;
}
