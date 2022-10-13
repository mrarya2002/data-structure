#include<stdio.h>

void display(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void indexDeletion(int arr[],int index, int size)
{
	int i;
	for(i=index;i<size-1;i++)
	{
		arr[i]=arr[i+1];
    }
}

void main(){
	int arr[10]={7,8,14,27,88};
	int size=5,index=1;
	display(arr,size);
	indexDeletion(arr,index,size);
	size-=1;
	display(arr,size);
}
