#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
	struct Node *prev;
};

void doublyLinkedListTraversal(struct Node*ptr,struct Node*last)
{
	while(ptr!=NULL)
	{
		printf("\nElement : %d",ptr->data);
		ptr=ptr->next;
	}
	while(last!=NULL)
	{
		printf("\nElement : %d",last->data);
		last=last->prev;
	}
}

void main()
{
	struct Node* head;
	struct Node* second;
	struct Node* third;
	struct Node* fourth;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	
	head->prev=NULL;
	head->data=4;
	head->next=second;
	
	second->prev=head;
	second->data=5;
	second->next=third;
	
	third->prev=second;
	third->data=6;
	third->next=fourth;
	
	fourth->prev=third;
	fourth->data=7;
	fourth->next=NULL;
	
	printf("displaying the data of doubly linked list : ");
	doublyLinkedListTraversal(head,fourth);
	
}
