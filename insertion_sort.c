#include <stdio.h>
int main() 
{
    int index,noOfEle,position,element;
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
    while(1)
    {
        printf("Insert -999 to exit!\n");
        printf("Enter the element to be inserted....");
        scanf("%d",&element);
        if(element!=-999)
        {
         for(position=0;position<noOfEle && arr[position]<element;position++);
         if(position==noOfEle)
            position--;
         else
         {
            for(index=noOfEle-1;index>position;index--)
             arr[index]=arr[index-1];
         }
         arr[position]=element;
         printf("\nThe Sorted Array....\n",noOfEle);
         for(index=0;index<noOfEle;index++)
         {
          printf("%d\t",arr[index]);
         }
        }
        else break;
    }
	return 0;
}

