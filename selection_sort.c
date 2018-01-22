#include <stdio.h>
int main() 
{
    int index,noOfEle,j_index,temp;
    printf("Enter the Number of Elements....");
    scanf("%d",&noOfEle);
    int arr[noOfEle];
    printf("Enter the %d Elements....\n",noOfEle);
    for(index=0;index<noOfEle;index++)
    {
     scanf("%d",&arr[index]);
    }
    printf("The %d Elements are....\n",noOfEle);
    for(index=0;index<noOfEle;index++)
    {
     printf("%d\t",arr[index]);
    }
    for(index=0;index<noOfEle;index++)
    {
        for(j_index=index+1;j_index<noOfEle;j_index++)
        {
            if(arr[index]>arr[j_index])
            {
                temp=arr[index];
                arr[index]=arr[j_index];
                arr[j_index]=temp;
            }
        }
    }
    printf("\nThe Sorted Array....\n",noOfEle);
    for(index=0;index<noOfEle;index++)
    {
     printf("%d\t",arr[index]);
    }
	return 0;
}

