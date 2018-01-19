#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the 1st Number....");
	scanf("%d",&num1);
    printf("Enter the 2nd Number....");
	scanf("%d",&num2);
	int difference;
	if(num1>num2)
	{
	    difference=num1-num2;
    }
    else 
    {
    	difference=num2-num1;
    }
	printf("The Difference of %d and %d is %d.\n",num1,num2,difference);
return 0;
}
