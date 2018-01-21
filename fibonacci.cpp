#include <iostream>
using namespace std;
int main()
{
	int i,a=0,b=1,c,n;
	cout<<"Enter the number of terms in Fibonacci Series....";
	cin>>n;
	cout<<"The Fibonacci Series...."<<endl<<a<<" "<<b<<" ";
	for(i=0;i<n;i++)
	{
       c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;
	}
	cout<<endl;
	return 0;
}