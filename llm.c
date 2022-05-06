#include "ll.h"

int main()
{
    Node* head = NULL;

    append(&head, 15);
    append(&head, 70);
    append(&head, 56);
    append(&head, 34);
    append(&head, 23);
    append(&head, 78);

    traverse(head);

    return 0;
}