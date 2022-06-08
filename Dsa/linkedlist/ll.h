#include <stdio.h>
#include <stdlib.h>
typedef struct st
{
    int data;
    struct st *next; // stores the data and the structure data type next of upcoming address
} node;
node *create_node(int value);
void append(node **head, int value);
void traverse(node *head);