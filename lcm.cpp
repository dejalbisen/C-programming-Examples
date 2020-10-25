#include<iostream>
using namespace std;
int main()
{
	int m,n,max;
	m=12;
	n=15;
	if(m>n)
	max=m;
	else
	max=n;
	while(true)
	{
		if(max%m==0&&max%n==0)
		{
			cout<<"lcm of"<<m<<"and"<<n<<"="<<max;
			break;
		}
		else
		max++;
	}
	return 0;
}
