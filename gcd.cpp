#include <iostream>
using namespace std;
int main()
{
	int i,num1,num2,gcd=0;
	cout<<"Enter the two positive numbers to find Greatest Common Divisor.....";
	cin>>num1>>num2;
	int min=(num1<=num2)?num1:num2;
    for(i=1;i<=min; i++)
    {
    	if(num1%i==0 && num2%i==0)
    	{
    		gcd=i;
    	}
    }
    if(num1 >0 && num2 >0)
      cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcd<<endl;
	else
	{ 
	    if(num1==0)
	    	gcd=num2;
	    else gcd=num1;
		cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcd<<endl;
	}
	return 0;
}