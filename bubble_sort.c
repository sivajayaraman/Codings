#include <stdio.h>
int main() 
{
    int index,noOfEle,j_index,temp,max;
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
    max=noOfEle;
    for(index=0;index<noOfEle;index++)
    {
        max--;
        for(j_index=0;j_index<max;j_index++)
        {
            if(arr[j_index]>arr[j_index+1])
            {
                temp=arr[j_index];
                arr[j_index]=arr[j_index+1];
                arr[j_index+1]=temp;
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

