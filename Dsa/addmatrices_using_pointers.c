// add two matrices and store the result in third matrix
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **p = (int**)malloc(sizeof(int)*3);
    for (int i = 0; i < 3; i++)
    {
        *(p+i) = (int*)malloc(sizeof(int)*3);
    }
    printf("Enter the elements of first matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the number: ");
            scanf("%d",&p[i][j]);
        }
    }
    int **q = (int**)malloc(sizeof(int)*3);
    for (int i = 0; i < 3; i++)
    {
        *(q+i) = (int*)malloc(sizeof(int)*3);
    }
    printf("Enter the elements of second matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the number: ");
            scanf("%d",&q[i][j]);
        }
    }
    int **r = (int**)malloc(sizeof(int)*3);
    for (int i = 0; i < 3; i++)
    {
        *(r+i) = (int*)malloc(sizeof(int)*3);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            r[i][j] = p[i][j]+q[i][j];
        }
    }
    printf("The sum of the two matrices: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
}