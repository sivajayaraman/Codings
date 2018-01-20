#include <stdio.h>
#include <math.h>
int main()
{
	int n,t,sum,remainder,power;
	while(1)
	{
		sum=0;
		power=0;
		printf("Enter Negative Number to exit....\n");
	    printf("Enter the Number to check whether it is Armstrong number or not....");
	    scanf("%d",&n);
	    if(n>=0)
    	{
	     t=n;
	     while(t!=0){
	    	power++;
	    	t=t/10;
	     } 
	     t=n;
	     while(t!=0)
	     {
	    	remainder=t%10;
	    	sum=sum+pow(remainder,power);
	    	t=t/10;
	     }
	     if(sum==n)
	     {
	    	printf("%d is an Armstrong Number\n",n);
	     }
	     else
	     {
	    	printf("%d is not an Armstrong Number\n",n);
	     }
	    }
	    else {
	    	printf("\nGood Bye....");
	    	break;
	    }
	}
	return 0;
}