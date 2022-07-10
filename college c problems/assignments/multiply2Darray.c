#include <stdio.h>
int multiply(int a[][10],int b[][10],int c[][10],int m,int n,int p,int q)
{
    if(n == p)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                int r = 0;
                for (int k = 0; k < n; k++)
                {
                    r+=a[i][k]*b[k][j];
                }
                c[i][j] =r;
            }
        }
        printf("The resultant Matrix: \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
}
int main()
{
    int m = 0 , n = 0 , p = 0 , q = 0;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the number of rows of first matrix: ");
    scanf("%d",&m);
    printf("Enter the number of columns of first matrix: ");
    scanf("%d",&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a number: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("The first Matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number of rows of second matrix: ");
    scanf("%d",&p);
    printf("Enter the number of columns of second matrix: ");
    scanf("%d",&q);
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter a number: ");
            scanf("%d",&b[i][j]);
        }
    }
    printf("The second Matrix: \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    multiply(a,b,c,m,n,p,q);
    return 0;
}