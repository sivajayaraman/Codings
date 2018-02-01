#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
int main()
{
	long int i,j;
	int element,start,end,choice;
    int prime[MAX]={0};
	for(i=2;i<=MAX;i++)
	{
		if(prime[i]==0)
		{
			for( j=i*2 ; j<=MAX ; j=j+i )
			{
				prime[j]=1;
			}
		}
	}
	while(1)
	{
	  cout<<endl<<"1)Find Prime Numbers in a Range"<<endl<<"2)Find whether a Number is Prime"<<endl<<"3)Exit"<<endl<<"Enter your Choice.....";
	  cin>>choice;
	          switch(choice)
	          {
               case 1: cout<<"\n\tEnter the Starting value....\n\t";
			           cin>>start;
			           cout<<"\n\tEnter the Ending value....\n\t";
			           cin>>end;
			           cout<<"\n\tThe Prime numbers in the range of "<<start<<" and "<<end<<endl;
			           for(i=start;i<=end;i++)
			           {
			          	if(prime[i]==0)
			        		cout<<"\t"<<i;
			           }
                       break;
		       case 2: cout<<"\n\tEnter the Number to check whether it is Prime.....\n\t";
			           cin>>element;
			           if(prime[element]==0)
			       		cout<<endl<<"\t"<<element<<" is a Prime number!"<<endl;
			   	        else
			           	cout<<endl<<"\t"<<element<<" is not a Prime number!"<<endl;
			            break;
			    case 3: break;        
		       default: cout<<"\nEnter a Valid Choice\n";        
	          }
		if(choice==3)
		{
			cout<<"Good Bye!"<<endl;
			break;
		}
	}
	return 0; 
}