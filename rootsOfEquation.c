#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,det,root1,root2;
	printf("Enter the Co Efficient of X^2....");
	scanf("%lf",&a);
	printf("Enter the Co Efficient of X....");
	scanf("%lf",&b);
	printf("Enter the Constant....");
	scanf("%lf",&c);
    det=b*b-4*a*c;
    if(det>0)
    {
      root1=((-b)+sqrt(det))/(2*a);
      root2=((-b)-sqrt(det))/(2*a);
      printf("The Roots of the Quadratic equation are %.2lf and %.2lf\n",root1,root2);
    }
    else if (det==0)
    {
      root1=root2=((-b)/(2*a));
      printf("The Roots of the Quadratic equation are %.2lf and %.2lf\n",root1,root1);
    }
    else
    {
      printf("\nImaginary Roots\n");
      root1=sqrt(-det)/(2*a);
      root2=sqrt(-det)/(2*a);
      printf("The Roots of the Quadratic equation are %.2lf + %.2lfi and %.2lf + %.2lfi\n",-b/(2*a),root1,-b/(2*a),root2);
    }
	return 0;
}