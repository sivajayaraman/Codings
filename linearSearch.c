#include <stdio.h>
int main()
{
	int index,n,element,flag=0;
	printf("\nEnter the number of elements.....\n");
	scanf("%d",&n);
	int array[n];
	printf("\nEnter the %d Values....\n",n);
    for(index=0;index<n;index++)
    {
    	scanf("%d",&array[index]);
    }
    printf("The Elements are....\n");
    for(index=0;index<n;index++)
    {
    	printf("%d\t",array[index]);
    }
    printf("\nEnter the Element to be Searched....");
    scanf("%d",&element);
    for(index=0;index<n;index++)
    {
    	if(array[index]==element)
    	{
    		flag=1;
    		printf("\nElement %d is found at %d\n",element,index+1);
    	}
    }
    if(flag==0)
    {
        printf("\nElement %d is not found\n",element);    	
    }
	return 0;
}