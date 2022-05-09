#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = (int*)malloc(sizeof(int)*5);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number: \n ");
        scanf("%d",&p[i]);
    }
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if(p[i]>max)
            max = p[i];
    }
    printf("The largest element in the array = %d",max);
}