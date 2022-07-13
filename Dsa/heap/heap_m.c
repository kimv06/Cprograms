#include "heap.h"
int main()
{
    Heap hp;
    init(&hp,5);
    add_maxheap(&hp,67);
    add_maxheap(&hp,34);
    add_maxheap(&hp,12);
    add_maxheap(&hp,98);
    add_maxheap(&hp,90);
    display(hp);
    return 0;
}