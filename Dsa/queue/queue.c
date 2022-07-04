#include "queue.h"
void init(Queue *line, int size)
{
    line->front = -1;
    line->rear = -1;
    line->n = size;
    line->arr = (int *)malloc(sizeof(int) * (line->n));
}
int isFull(Queue *line)
{
    if ((line->rear) == (line->n - 1))
        return 1;
    return 0;
}
int isEmpty(Queue *line)
{
    if (line->front > line->rear)
    {
        line->front = -1;
        line->rear = -1;
    }
    if ((line->front) == -1)
        return 1;
    return 0;
}
void enqueue(Queue *line, int value)
{
    if (isFull(line) == 1)
    {
        printf("Queue is full!!\n");
        return;
    }
    if (isEmpty(line) == 1)
        line->front = 0;
    line->rear++;
    line->arr[line->rear] = value;
}
int dequeue(Queue *line)
{
    if (isEmpty(line) == 1)
    {
        printf("Queue is Empty!");
        return 69966336;
    }
    int val = line->arr[line->front];
    line->front++;
    return val;
}
void display(Queue *line)
{
    if (isEmpty(line) == 1)
    {
        printf("Queue is Empty!!");
        return;
    }
    printf("\n");
    for (int i = line->front; i <= line->rear; i++)
    {
        printf("%d ", line->arr[i]);
    }
}