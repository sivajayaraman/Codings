#include <iostream>
using namespace std;
int main()
{
	int number,reverse=0,remainder;
	cout<<"Enter the Number....";
	cin>>number;
	int t=number;
	while(t!=0)
	{
      remainder=t%10;
      reverse=(reverse*10)+remainder;
      t=t/10;
	}
	if(number==reverse)
		cout<<number<<" is Palindrome!"<<endl;
	else
		cout<<number<<" is not a Palindrome!"<<endl;
	return 0;
}