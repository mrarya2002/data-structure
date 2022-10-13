#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};


void LinkedListTraversal(struct Node* ptr)
{
	while(ptr!=NULL)
	{
	    printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
	}
}


// Case 1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//****************case2*********
struct Node* deletionAtIndex(struct Node*head,int index)
{
	struct Node*p=head;
	struct Node*q=head->next;
	int i;
	
	for(i=0;i<index-1;i++)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
	
}


//**************case 3**************
struct Node*deletionAtEnd(struct Node*head)
{
	struct Node*p=head;
	struct Node*q=head->next;
	int i;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return head;
}


//*********case 4
struct Node*deletionAfterNode(struct Node*head,struct Node*prevNode)
{
	struct Node*p=head;
	struct Node*q=prevNode;
	
	while(p->next!=q)
	{
		p=p->next;
	}
	p->next=q->next;
	free(q);
	return head;
	
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
	
	head->data=7;
	head->next=second;
	
	second->data=11;
	second->next=third;
	
	third->data=24;
	third->next=fourth;
	
	fourth->data=33;
	fourth->next=NULL;
	printf("Linked list before deletion\n");
	LinkedListTraversal(head);
	
//	head=deleteFirst(head);
//    head=deletionAtIndex(head,2);
//    head=deletionAtEnd(head);
    head=deletionAfterNode(head,third);
	printf("Linked list after deletion\n");
	LinkedListTraversal(head);
	
}
	
