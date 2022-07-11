#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct st
{
    struct st *prev;
    struct st *next;
    char *data;
} Node;
Node *create_node(char *);
void add_after(Node **head, Node **tail, int, char *);
void add_before(NOde **head, Node **tail, int, char *);
void first_song(Node *head);
void last_song(Node *tail);
void next(Node **current);
void jump(Node **current, Node *tojump);
void append(Node **head, Node **tail, char *);
void display(Node *head);
void remove(Node **head, Node *toremove);
