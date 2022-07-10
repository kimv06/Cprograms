#include <stdio.h>
#include <stdlib.h>
int transpose(int *p, int m, int n)
{
    int trans[50][50];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            trans[i][j] = *(p + (j * n) + i);
        }
    }
    printf("Transpose of the given matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m = 0, n = 0, *p;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    p = (int *)malloc(sizeof(int) * m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a number: ");
            scanf("%d", (p + (i * n) + j));
        }
    }
    printf("Entered Matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", *(p + (i * n) + j));
        }
        printf("\n");
    }
    transpose(p, m, n);
    return 0;
}
