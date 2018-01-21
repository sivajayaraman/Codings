#include <iostream>
using namespace std;
int main()
{
	int number,i,flag=0;
	cout<<"Enter the Number....\n";
	cin>>number;
	if(number!=2)
	{
      for(i=2;i<=number/2;i++)
      {
    	if(number%i==0)
    	{
    		flag=1;
    		break;
    	}
      }
      if(flag==0)
      {
      	cout<<number<<" is a Prime Number\n";
      }
      else
      {
      	cout<<number<<" is not a Prime Number\n";
      }
    }
    else
    {
    	cout<<number<<" is a Prime Number\n";
    }
	return 0;
}
