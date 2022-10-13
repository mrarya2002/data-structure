#include<stdio.h>

void display(int arr[],int size)
{
	int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int indexInsertion(int arr[],int size,int index,int element, int capacity)
{
	int i;
	if(size>=capacity){
		return -1;
	}
	for(i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	return 1;
}

int main()
{
    int arr[10]={7,8,14,27,88};
    int element=45,index=3,size=5;
    display(arr,size);
    indexInsertion(arr,size,index,element,10);
    size+=1;
    display(arr,size);
    return 0;
}
