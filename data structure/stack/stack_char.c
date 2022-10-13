#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

char stack[50];
int i,n,top=-1,option;

int isFull()
{
    if(top>=n-1)
        return 0;
    return 1; 
}

int isEmpty()
{
    if(top==-1)
        return 1;
    return 0;    
}

void push(char a)
{
    if(isFull()==0)
        printf("stack overflow");
    else        
        top++;
        stack[top]=a;
}

int pop()
{
    if(isEmpty()==-1)
        printf("stack underflow");
    else    
        top--;
        char val;
        val=stack[top];
        return val;
}
void main()
{
    printf("enter the size of stack ");
    scanf("%d",&n);
    
    printf("\nchoose option");
    scanf("%d",&option);
    push('n');   
    push('i');   
    push('k');  
    push('h');    
    push('i');   
    push('l');  
    
    // for(i=0;i<n;i++)
    //     printf("%c",pop()); 

    // for(i=n;i<0;i--)
    //     printf("%c",stack[i]);     
    i=0;
    while(stack[i]!='\0')
    {
        printf("%c",stack[i]);
        i++;
    }
}