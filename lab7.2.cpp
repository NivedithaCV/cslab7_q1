#include <iostream>
using namespace std;

int printnum(int n,int i)
{	
	
	if (i==n+1)
	{
	return 0;
	}
	else
	{
	cout<<i<<endl;
	
	i++;
	return printnum(n,i);
}}	
int main()
{	
	int i;
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	printnum(n,1);
	return 0;
}

