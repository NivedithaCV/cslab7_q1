#include <iostream>
using namespace std;

int sumofeven(int i,int n)
	{
	if(i%2==0)
	{
	 if(i==n)
	 {
	 return 0;
	 }
	 else{
	 return i+sumofeven(i+2,n+1);
	}}
	else
	 {
	if(i==n)
	 {
	 return 0;
	 }
	 else{
	 return (i+1)+sumofeven(i+2,n);
	}}
	}
int main()
{
	int i,n,s;
	cout<<"enter the lower limit"<<endl;
	cin>>i;
	cout<<"enter the upper limit"<<endl;
	cin>>n;
	s=sumofeven(i,n);
	cout<<"the sum is"<<s<<endl;
	return 0;
}
	
	
	
	
