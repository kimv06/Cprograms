#include <stdio.h>
int main()
{
    int n = 0, c = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = n-1; k >= i; k--)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;
            printf("%4d", c);
        }
        printf("\n");
    }
    return 0;
}