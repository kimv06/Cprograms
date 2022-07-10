#include <stdio.h>
int sparse(int a[][50], int m, int n)
{
    int zero = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j] == 0)
                zero++;
        }
    }
    if(zero >= ((m*n)/2))
        printf("The given matrix is a Sparse matrix");
    else
        printf("The given matrix is not a Sparse matrix");
}
int main()
{
    int m = 0 , n = 0;
    int arr[50][50];
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a number: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered Matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    sparse(arr,m,m);
    return 0;
}