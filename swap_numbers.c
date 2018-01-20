#include <stdio.h>
int main()
{
	int num1,num2,temp,sum;
	printf("Enter X number....");
	scanf("%d",&num1);
	printf("Enter Y number....");
	scanf("%d",&num2);
	printf("X : %d  Y : %d",num1,num2);
	printf("\nBy Using a Third Variable(Temporary Variable):\n");
    temp=num1;
    num1=num2;
    num2=temp;
    printf("X : %d  Y : %d",num1,num2);
    printf("\nWithout Using a Third Variable(Summing and Subtracting):\n");
    printf("Enter X number....");
	scanf("%d",&num1);
	printf("Enter Y number....");
	scanf("%d",&num2);
	printf("X : %d  Y : %d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("X : %d  Y : %d",num1,num2);
	return 0;
}