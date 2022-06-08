#include "stack.h"
void init(stack *aam)
{
    printf("Enter the size of array: ");
    scanf("%d", &aam->num);
    aam->arr = (int *)malloc(sizeof(int) * aam->num);
    aam->top = -1;
}
void push(stack *aam, int value)
{
    if (aam->top == aam->num)
        printf("STACK OVERFLOWN!");
    else
    {
        aam->top++;
        aam->arr[aam->top] = value;
    }
}
int pop(stack *aam)
{
    if (aam->top == -1)
    {
        return 696325;
    }
    else
    {
        int ram = aam->arr[aam->top];
        aam->top--;
        return ram;
    }
}
void peek(stack aam)
{
    if(aam.top==-1)
        printf("STACK EMPTY");
    else
        printf("%d",aam.arr[aam.top]);
}
