#include <stdio.h>
int main()
{
	int divisor,dividend;
	printf("Enter the Divisor.....");
	scanf("%d",&divisor);
    printf("Enter the Dividend....");
	scanf("%d",&dividend);
	int quotient,remainder;
	quotient=divisor/dividend;
	remainder=divisor%dividend;
	printf("The Quotient when %d divided by %d is %d and the remainder is %d.\n",divisor,dividend,quotient,remainder);
return 0;
}
