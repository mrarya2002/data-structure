#include<stdio.h>
#include<stdlib.h>

struct Myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct Myarray *a,int t_size,int u_size)
{
    a->total_size=t_size;
    a->used_size=u_size;
    a->ptr=(int*)malloc(t_size*sizeof(int));
}

void setVal(struct Myarray *a)
{
    int n;
    printf("enter the numbers in array");
    for(int i=0;i<a->used_size;i++)
    {
        scanf("%d",&n);
        a->ptr[i]=n;
    }
}

void show(struct Myarray *a)
{
    for(int i=0;i<a->used_size;i++)
    {
        printf("%d ",a->ptr[i]);
    }
}

int main()
{
    struct Myarray array;
    createArray(&array,5,2);
    setVal(&array);
    show(&array);
    
    return 0;
}