#include <music_player.h>
int main()
{
    FILE *fp;int p;
    char c,t[40];
    char str[40];
    Node *head = NULL, *tail = NULL, *pos = NULL, *curr;
    fp = fopen("music.txt", "r");
    while ((fgets(str, 40, fp)))
        add_end(&head, &tail, str);
    traverse(head);
    do
    {
        printf("\nS:Start the player.");
        printf("\nJ:Jump to a specific track.");
        printf("\nN:Next track.");
        printf("\nP:Previous track.");
        printf("\nF:First track.");
        printf("\nL:Last track.");
        printf("\nA:Add a track after an existing track.");
        printf("\nB:Add a track before an existing track.");
        printf("\nR:Remove a specific track from the list.");
        printf("\nT:To print the playlist.");

        printf("\nEnter your choice: ");
        scanf("%c%c", &c);
        switch (c)
        {
        case 'S':
            curr = head;
            play(curr);
            break;
        case 'J':
            printf("\nEnter a position: ");
            scanf("%d", &p);
            pos = search_by_pos(head, p);
            play(pos);
            break;
        case 'N':
            if (curr->next == NULL)
            {
                curr = head;
                play(curr);
            }
            else
            {
                play(curr->next);
                curr = curr->next;
            }
            break;

        case 'P':
            if (curr->previous == NULL)
                break;
            else
            {
                play(curr->previous);
                curr = curr->previous;
            }
            break;

        case 'F':
            play(head);
            break;

        case 'L':
            play(tail);
            break;

        case 'A':
            printf("\nEnter a pos: ");
            scanf("%d%c", &p);
            printf("\nEnter a track: ");
            fgets(t, sizeof(t), stdin);
            add_after(head, p, t, fp);
            break;
        case 'B':
            printf("\nEnter a pos: ");
            scanf("%d%c", &p);
            printf("\nEnter a track: ");
            fgets(t, sizeof(t), stdin);
            add_before(head, p, t, fp);
            break;

        case 'R':
            printf("\nEnter a pos: ");
            scanf("%d", &p);
            delete (head, p);
            break;

        case 'T':
            traverse(head);
            break;

        case 'Y':
            continue;

        case 'n':
            return 0;

        default:
            break;
        }
        printf("\nDo you want to continue? ");
        scanf("%c", &c);
    } while (c != 'n');
    fclose(fp);
    return 0;
}