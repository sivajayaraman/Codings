#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
typedef struct node{
  int data;
  struct node* next;
}NODE;
NODE* start;
NODE* ptr;
NODE* previous;
void displayList()
{
  if(start!=NULL)
  {
   for(ptr=start;ptr!=NULL;ptr=ptr->next)
   {
  	printf("%d\t",ptr->data);
   }
  }
  else printf("\nList is Empty!\n");
}
void insertElement(int element)
{
  NODE* newnode;
  newnode=(NODE*)malloc(sizeof(NODE));
  newnode->next=NULL;
  newnode->data=element;
  for(ptr=start;ptr!=NULL && ptr->data < newnode->data;previous=ptr,ptr=ptr->next);
  		if(ptr==start)
  		{
  			newnode->next=start;
            start=newnode;
  		}
  		else
  		{
            newnode->next=ptr;
            previous->next=newnode;
  		}
  		printf("\n");
  		displayList();
        printf("\n");
 }
void deleteElement(int element)
{
  if(start!=NULL)
  {
  	for(ptr=start;ptr!=NULL;previous=ptr,ptr=ptr->next)
    {
  	  if(ptr->data==element)
  	  {
  	 	printf("Element %d is Found !",element);
  	 	break;
  	  } 
    }
    previous->next=ptr->next;
    ptr->next=NULL;
    printf("\nElement Deleted is %d\n",ptr->data); 
    displayList();
  }
  else printf("\nList is Empty!\n");
}
void searchAndReplaceElement(int element)
{
  int position=1,replace;
  if(start!=NULL)
  {
   for(ptr=start;ptr!=NULL;ptr=ptr->next)
    {
  	  if(ptr->data==element)
  	  {
  	 	printf("\nElement %d Found ! Element is present at %d node",element,position);
  	 	printf("\nEnter the Replacement.....");
  	 	scanf("%d",&replace);
  	 	printf("\nAfter replacement the list is....\n");
  	 	ptr->data=replace;
  	 	displayList();
  	 	break;
  	  } 
  	    position++;
    }
   }
  else printf("\nList is Empty!\n");
}
int main()
{
	int choice,element;
	while(1)
	{
		printf("\n1)Insert Element\n2)Delete Element\n3)Display List\n4)Search and Replace Element\n5)Exit\n");
		printf("\nEnter your Choice....");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:  printf("\nEnter an Element to Insert.....");
                     scanf("%d",&element);
                     insertElement(element);
                     break;
			case 2:  printf("\nEnter an Element to Delete.....");
                     scanf("%d",&element);
                     deleteElement(element);
                     break;
			case 3:  displayList();
                     break;
			case 4:  printf("\nEnter an Element to Search.....");
                     scanf("%d",&element);
                     searchAndReplaceElement(element);
                     break;
		  	default: printf("\nGood Bye....\n");
                     break; 
		} 
		if(choice==5)
		{
			break;
		}
	}
 return 0;
}