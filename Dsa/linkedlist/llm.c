#include "ll.h"
int main()
{
    node *head = NULL;
    append(&head, 69);
    append(&head, 63);
    append(&head, 96);
    append(&head, 36);
    printf("THE LINKED LIST IS WHATEVER \n");
    traverse(head);
    return 0;
}