#include <iostream>
using namespace std;
int main()
{
	int number,i,limit;
	cout<<"Enter the number for generating Table....";
	cin>>number;
	cout<<"Enter the last value to be generated.....";
	cin>>limit;
	for(i=1;i<=limit;i++)
	{
		cout<<i<<" x "<<number<<" = "<<i*number<<endl;
	}
	return 0;
}