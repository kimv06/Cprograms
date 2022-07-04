#include <stdio.h>
#include <stdlib.h>
typedef struct st
{
    int front;
    int rear;
    int *arr;
    int n;
} Queue;
void init(Queue *line, int size);
int isFull(Queue *line);
int isEmpty(Queue *line);
void enqueue(Queue *line, int value);
int dequeue(Queue *line);
void display(Queue *line);