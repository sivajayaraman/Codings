#include <iostream>
using namespace std;
int main()
{
	int decimal_number,array[100],count=0,i;
	cout<<"Enter the Decimal Number....";
	cin>>decimal_number;
	int temp=decimal_number;
	while(decimal_number!=0)
	{
		array[count]=decimal_number%2;
		count++;
		decimal_number=decimal_number/2;
	}
	cout<<"The Binary Number of "<<temp<<" is ";
	for(i=count-1;i>=0;i--)
	{
		cout<<array[i];
	}
	cout<<endl;
	return 0;
}