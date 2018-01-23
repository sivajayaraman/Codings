#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
typedef struct node
{
  int data;
  struct node* previous;
  struct node* next;
}NODE;
NODE* start;
NODE* end;
NODE* ptr;
void forwardDisplayList()
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
void backwardDisplayList()
{
  if(start!=NULL)
  {
   for(ptr=end;ptr!=NULL;ptr=ptr->previous)
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
  newnode->previous=NULL;
  newnode->data=element;
  if(start==NULL)
  {
    start=end=newnode;
  } 
  else
  {
   for(ptr=start;ptr!=NULL && ptr->data < newnode->data;ptr=ptr->next);
  		if(ptr==start)
  		{
  			    newnode->next=start;
            start->previous=newnode;
            start=newnode;
  		}
  		else if(ptr==NULL)
  		{
            newnode->previous=end;
            end->next=newnode;
            end=newnode;
  		}
      else
      {
           newnode->next=ptr;
           newnode->previous=ptr->previous;
           ptr->previous=newnode;
           (newnode->previous)->next=newnode;
      }
    }
 }
void deleteElement(int element)
{
  if(start!=NULL)
  {
    for(ptr=start;ptr!=NULL;ptr=ptr->next)
    {
      if(ptr->data==element)
      {
      printf("Element %d is Found !",element);
      break;
      } 
    }
    (ptr->previous)->next=ptr->next;
    ptr->next=NULL;
    printf("\nElement Deleted is %d\n",ptr->data); 
    forwardDisplayList();
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
  	 	 forwardDisplayList();
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
		printf("\n1)Insert Element\n2)Delete Element\n3)Backward Display List\n4)Forward Display\n5)Search and Replace Element\n6)Exit\n");
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
			case 3:  backwardDisplayList();
               break;
			case 4:  forwardDisplayList();
               break;
      case 5:  printf("\nEnter an Element to Search.....");
               scanf("%d",&element);
               searchAndReplaceElement(element);
               break;
		  default: printf("\nGood Bye....\n");
               break; 
		} 
		if(choice>=6)
		{
			break;
		}
	}
 return 0;
}