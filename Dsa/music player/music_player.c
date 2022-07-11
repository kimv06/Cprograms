#include <music_player.h>
Node *create_node(char *value)
{
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
void add_after(Node **head, Node **tail, int n, char *value)
{
    Node *new = create_node(value);
    Node *current;
    while ((n--) > 0)
    {
        current = current->next;
    }
    Node *temp = current->next;
    current->next = new;
    new->prev = current;
    new->next = temp;
    temp->prev = new;
}
void add_before(Node **head, Node **tail, int n, char *value)
{
    Node *new = create_node(value);
    Node *current;
    while ((n--) > 0)
    {
        current = current->next;
    }
    Node *temp = current->prev;
    temp->next = new;
    new->prev = temp;
    new->next = current;
    current->prev = new;
}
void first_song(Node *head)
{
    printf("%s", head->data);
}
void last_song(Node *tail)
{
    printf("%s", tail->data);
}
void next(Node **current)
{
    *current = (*current)->next;
}
void jump(Node **current, Node *tojump)
{
    while ((*current)->data != tojump->data && (*current)->data != NULL)
    {
        *current = (*current)->next;
    }
}
void append(Node **head, Node **tail, char *value)
{
    Node *new = create_node(value);
    if ((*head == NULL) && (*tail == NULL))
    {
        *head = new;
        *tail = new;
        return;
    }
    (*tail)->next = new;
    new->prev = (*tail);
    (*tail) = (*tail)->next;
}
void display(Node *head)
{
    while (head != NULL)
    {
        printf("%s", head->data);
        head = head->next;
    }
}
void remove(Node **head, Node *toremove)
{
    Node *curr = *head;
    while (curr->next->data != toremove->data)
    {
        curr = curr->next;
    }
    Node *temp = toremove->next;
    curr->next = temp;
    temp->prev = curr;
}