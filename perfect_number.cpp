#include <iostream>
using namespace std;
int main()
{
	int i,number;
	while(number>=0)
	{
		int sum=0;
		cout<<"\nEnter Negative Number to Exit....\n";
	    cout<<"Enter the Number.....";
	    cin>>number;
	    if(number>=0)
	    {
	    	for(i=1;i<=number/2;i++)
	    	{
	    		if(number%i==0)
	    		{
	    			sum=sum+i;
	    		}
	    	}
	    	if(sum==number)
	    		cout<<number<<" is a Perfect Number....\n";
	    	else 
	    		cout<<number<<" is not a Perfect Number....\n";
	    }
	}
	return 0;
}