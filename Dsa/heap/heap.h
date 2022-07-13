#include <stdio.h>
#include <stdlib.h>
#define item int
typedef struct 
{
    item *arr;
    int size;
    int rear;
}Heap;
void init(Heap *hp,int size);
void add_maxheap(Heap *hp,item value );
void swap(item *a,item *b);
void display(Heap hp);