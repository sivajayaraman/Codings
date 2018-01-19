#include <stdio.h>
int main()
{
	int choice=0,divisor,dividend,multiplier,multiplicant,sum,remainder,quotient,num1,num2,difference,product;
	while(choice!=5)
	{
     printf("\n\t1.Add\n\t2.Subtract\n\t3.Divide\n\t4.Multiply\n\t5.Exit\n\tEnter your Choice....");
     scanf("%d",&choice);
     if(choice!=5)
     {
      switch(choice)
       {
     	case 1: printf("Enter the 1st Number....");
	            scanf("%d",&num1);
                printf("Enter the 2nd Number....");
	            scanf("%d",&num2);
	            sum=num1+num2;
            	printf("The Sum of %d and %d is %d .\n",num1,num2,sum);
            	break;
        case 2: printf("Enter the 1st Number....");
	            scanf("%d",&num1);
                printf("Enter the 2nd Number....");
	            scanf("%d",&num2);
	        	if(num1>num2)
	                difference=num1-num2;
                else 
                	difference=num2-num1;
	            printf("The Difference of %d and %d is %d.\n",num1,num2,difference);
	            break;
        case 3: printf("Enter the Divisor.....");
	            scanf("%d",&divisor);
                printf("Enter the Dividend....");
	            scanf("%d",&dividend);
	            int quotient,remainder;
	            quotient=divisor/dividend;
	            remainder=divisor%dividend;
	            printf("The Quotient when %d divided by %d is %d and the remainder is %d.\n",divisor,dividend,quotient,remainder);  
	    case 4: printf("Enter the Multiplier......");
	            scanf("%d",&multiplier);
                printf("Enter the Multiplicant....");
                scanf("%d",&multiplicant);
                product=multiplicant*multiplier;
	            printf("The Product when %d multiplied by %d is %d.\n",multiplier,multiplicant,product);
	            break;
        default:printf("Enter a correct choice !\n");
       }
    }
    else
    {
    	printf("Good Bye! \n");
    }
   }
return 0;
}
