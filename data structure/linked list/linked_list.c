#include<stdio.h>

struct Node
{
	int data;
	struct Node* next;
};


void LinkedListTraversal(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("Element: %d\n", ptr->data);
		ptr=ptr->next;
	}
}


int main(){
	
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    
    // Allocate memory for nodes in the linked list in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    
//    link first and second node
    head->data=7;
    head->next=second;
    
//    link second and third node
    second->data=8;
    second->next=third;
    
//    link third and fourth node
    third->data=9;
    third->next=fourth;
    
// Terminate the list at the fourth node
    fourth->data=10;
    fourth->next=NULL;
    
    LinkedListTraversal(head);
    
    return 0;
}

