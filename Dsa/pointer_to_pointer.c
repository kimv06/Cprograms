#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int a = 69;
    // int *ptr = &a;
    // int **p = &ptr;
    // printf("%d",a);
    // printf("\n%d",ptr);
    // printf("\n%d",*ptr);
    // printf("\n%d",p);
    // printf("\n%d",*p);
    // printf("\n%d",**p);
    // ek 2D array me rows or columns hota hai
    // mere laptop me editor hai jaise ki paint
    int **p = (int**)malloc(sizeof(int)*3); // creates 3 rows in the array
    for (int i = 0; i < 3; i++)
    {
        *(p+i) = (int*)malloc(sizeof(int)*2); // creates 2 columns in the array
    }
    for ( int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the values: \n");
            scanf("%d",&p[i][j]);
        }
    }
    printf("the array is :\n");
    for ( int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}