#include <iostream>
using namespace std;

int sumofnum(int n)
{
	if(n==0)
	{
	return 0;
	}
	else
	{
	return n+sumofnum(n-1);
	}
}

int main()
{
	int n;
	cout<<"enter the limit"<<endl;
	cin>>n;
	cout<<"the sum is"<<sumofnum(n)<<endl;
	return 0;
}

