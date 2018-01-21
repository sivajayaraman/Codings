#include <iostream>
using namespace std;
int main()
{
	int number,i,flag=0,j,start,end;
	cout<<"Enter the Starting Number....\n";
	cin>>start;
  cout<<"Enter the Ending Number....\n";
  cin>>end;
  for(i=start;i<=end;i++)
  {
    flag=0;
    number=i;
	 if(number>=2)
	 {
      for(j=2;j<=number/2;j++)
      {
    	 if(number%j==0)
    	 {
    	  	flag=1;
    		  break;
    	 }
      }
      if(flag==0 || number==2)
      {
      	cout<<number<<"\t";
      }
   }
  }
	return 0;
}
