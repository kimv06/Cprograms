// transpose of matrix
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **p = (int**)malloc(sizeof(int)*3);
    for (int i = 0; i < 3; i++)
    {
        *(p+i) = (int*)malloc(sizeof(int)*3);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the number: ");
            scanf("%d",&p[i][j]);
        }
    }
    printf("The matrix before transpose : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    int **trans = (int**)malloc(sizeof(int)*3);
    for (int i = 0; i < 3; i++)
    {
        *(trans+i) = (int*)malloc(sizeof(int)*3);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i]=p[i][j];
        }
    }
    printf("After Transpose: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
}
