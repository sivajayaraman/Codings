#include <iostream>
using namespace std;
int main()
{
	long long int number,factorial=1;
	cout<<"Enter the NUmber....";
	cin>>number;
    int i;
    for(i=1;i<=number;i++)
    {
    	factorial=factorial*i;
    }
    cout<<"Factorial of "<<number<<" is "<<factorial<<endl;
	return 0;
}