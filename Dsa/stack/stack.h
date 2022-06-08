#include <stdio.h>
#include <stdlib.h>
typedef struct st
{
    int top;
    int *arr;
    int  num;
}stack;
void init(stack *aam);
void push(stack *aam,int value);
int pop(stack *aam);
void peek(stack aam);
