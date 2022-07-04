#include "queue.h"
int main()
{
    Queue line;
    int size = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    init(&line,size);
    enqueue(&line,12);
    enqueue(&line,56);
    enqueue(&line,80);
    enqueue(&line,69);
    enqueue(&line,67);
    display(&line);
    int x = dequeue(&line);
    display(&line);
    printf("\nDeleted item = %d",x);
    return 0;
}