#include "heap.h"
void init(Heap *hp,int size)
{
    hp->arr = (item*)malloc(sizeof(item)*size);
    hp->rear = -1;
    hp->size = size;
}
void add_maxheap(Heap *hp,item value)
{
    int c , p;
    if(hp->rear == hp->size-1)
        return;
    hp->rear++;
    hp->arr[hp->rear]=value;
    c = hp->rear;
    while(c != 0)
    {
        p = (c-1)/2;
        if(hp->arr[c]>hp->arr[p])
            swap(&(hp->arr[c]),&(hp->arr[p]));
        c=p;
    }
}
void swap(item *a,item *b)
{
    item temp = *b;
    *b = *a;
    *a = temp;
}
void display(Heap hp)
{
    for (int i = 0; i < hp.size; i++)
    {
        printf("%d ",hp.arr[i]);
    }
    printf("\n");
}