#include <iostream>
using namespace std;

int printeven(int a,int z,int i)
{
	if(i<a||i>z)
	{
	 return 0;
	}
	else
	{
	 cout<<i<<endl;
	 i=i+2;
	 return printeven(a,z,i);
	}
}	

int main()
{
	int a,z;
	cout<<"print the lower limit"<<endl;
	cin>>a;
	cout<<"print the upper limit"<<endl;
	cin>>z;
	printeven(a,z,a);
	return 0;
}
