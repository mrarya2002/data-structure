#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack* ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(struct stack* ptr)
{
	if(ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
//	struct stack s;
//	s.top=-1;
//	s.size=6;
//	s.arr=(int*)malloc(s.size*sizeof(int));
	
	struct stack *s;
	s->size=5;
	s->top=-1;
	s->arr=(int*)malloc(s->size*sizeof(int));
	
	s->arr[0]=4;
	s->top++;
	s->arr[1]=5;
	s->top++;
	s->arr[2]=6;
	s->top++;
	s->arr[3]=7;
	s->top++;
	// s->arr[4]=8;
	// s->top++;
	
	// Check if stack is empty
    // if(isEmpty(s)){
    //     printf("The stack is empty");
    // }
    // else{
    //     printf("The stack is not empty");
    // }

    //check if stack is full
	if(isFull(s))
	{
		printf("stack is full \n");
	}
	else{
		printf("stack is empty\n");
	}	
}