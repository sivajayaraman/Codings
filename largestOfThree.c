#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the First number....");
	scanf("%d",&num1);
	printf("Enter the Second number....");
	scanf("%d",&num2);
	printf("Enter the Third number....");
	scanf("%d",&num3);
    if(num1>=num2 && num1>=num3)
    {
    	printf("%d is greatest....",num1);
    }
    else if(num2>=num1 && num2>=num3)
    {
        printf("%d is greatest....",num2);	
    }
    else printf("%d is greatest....",num3);
	return 0;
}