#include<stdio.h>
#include<stdlib.h>

struct stack 
{
	int top;
	int size;
	int* arr;
};

int isEmpty(struct stack* s)
{
	if(s->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(struct stack* s)
{
	if(s->top==s->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr)
{
	if(isEmpty(ptr))
	{
		printf("stack underflow");
	}
	else{
		int val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}

int peek(struct stack* ptr,int i)
{
	int arrInd=ptr->top-i+1;
	if(arrInd<0){
		printf("Not a valid position for the stack\n");
        return -1;
	}
	else{
		return ptr->arr[arrInd];
	}
}

int stackTop(struct stack* s){
    return s->arr[s->top];
}
 
int stackBottom(struct stack* s){
    return s->arr[0];
}

void main()
{
	int j;
	struct stack* s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	s->size=10;
	s->arr=(int*)malloc(s->size*sizeof(int));
	printf("Stack has been created successfully\n");
 
    printf("Before pushing, Full: %d\n", isFull(s));
    printf("Before pushing, Empty: %d\n", isEmpty(s));
    push(s,1);
    push(s,23);
    push(s,99);
    push(s,75);
    push(s,3);
    push(s,64);
    push(s,57);
    push(s,46);
    push(s,89);
    push(s,6);  
//    push(s, 5);  
//    push(s, 75);
	
	for(j=1;j<s->size-1;j++)
	{
		printf("The value at position %d is %d \n",j,peek(s,j));
	}
	
	printf("The top most value of this stack is %d\n", stackTop(s));
    printf("The bottom most value of this stack is %d\n", stackBottom(s));
}
