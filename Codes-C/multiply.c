#include <stdio.h>
int main()
{
	int multiplier,multiplicant;
	printf("Enter the Multiplier......");
	scanf("%d",&multiplier);
    printf("Enter the Multiplicant....");
	scanf("%d",&multiplicant);
	int product;
	product=multiplicant*multiplier;
	printf("The Product when %d multiplied by %d is %d.\n",multiplier,multiplicant,product);
return 0;
}
