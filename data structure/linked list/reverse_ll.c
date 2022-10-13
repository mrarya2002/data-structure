#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void traverse(struct node* p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

struct node* reverse(struct node* p)
{
	struct node* prevptr=(struct node*)malloc(sizeof(struct node));
	struct node* currptr=(struct node*)malloc(sizeof(struct node));
	struct node* nextptr=(struct node*)malloc(sizeof(struct node));
	
	prevptr=NULL;
	currptr=p;
	nextptr=NULL;
	
	while(currptr!=NULL)
	{
		nextptr=currptr->next;
		currptr->next=prevptr;
		
		prevptr = currptr;
		currptr = nextptr;
	}

	return currptr;
}

void main()
{
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	struct node* fourth=NULL;
	struct node* fifth=NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	fifth=(struct node*)malloc(sizeof(struct node));
	
	head->data = 1;
	head->next =second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = fourth;
	
	fourth->data = 4;
	fourth->next = fifth;
	
	fifth->data = 5;
	fifth->next = NULL;
	
	traverse(head); 
	
	printf("\nreversing the linked list  :");
	head = reverse(head);
	traverse(head);
}
