#include "stack.h"
int main()
{
    stack temp;
    init(&temp);
    push(&temp,68);
    push(&temp,95);
    push(&temp,62);
    push(&temp,36);
    push(&temp,25);
    int shyam=pop(&temp);
    if(shyam==696325)
        printf("STACK UNDERFLOWN!");
    else
        printf("The delected element is: %d\n",shyam);
    peek(temp);
    
}