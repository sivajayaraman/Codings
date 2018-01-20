#include <stdio.h>
int main()
{
	int number=0;
	while(number >=0){
		printf("Enter a negative number to stop execution....\n");
		printf("Enter the number....");
		scanf("%d",&number);
		if(number%2==0 && number>=0)
		{
			printf("%d is an even number.\n",number);
		}
		else if(number>=0)
		{
			printf("%d is an odd  number.\n",number);
		}
		else
		{
			printf("Good Bye....\n");
		}
	}
	return 0;
}
