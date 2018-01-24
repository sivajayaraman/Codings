#include <stdio.h>
int main()
{
	int index,n,element,flag=0,temp,j_index;
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
        for(j_index=index;j_index<n;j_index++)
        {
            if(array[index]>array[j_index])
            {
                temp=array[index];
                array[index]=array[j_index];
                array[j_index]=temp;
            }
        }
    }
    int start=0,mid,end=0;
    mid=(start+end)/2;
    while(mid>=0)
    {
      if(array[mid]==element)
      {
        flag=1;
        printf("\nElement %d found!\n",element);
        break;
      }
      else if(array[mid]>element)
      {
        start=array[mid];
        end=array[n-1];
        mid=(start+end)/2;
      }
      else
      {
        start=array[0];
        end=array[mid];
        mid=(start+end)/2;
      }
    }
    if(flag==0)
    {
      printf("\nElement not present!\n");
    }
	return 0;
}