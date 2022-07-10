#include <stdio.h>
#include <Stdlib.h>
int main()
{
    int n,i,sum = 0;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n];
    int *b[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = &a[i];
    }
    for (i = 0; i < n; i++)
    {
        sum += *b[i];
    }
    printf("The sum of the elements = %d",sum);
    free(b);
    free(a);
    return 0;
}