#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = (int*)malloc(sizeof(int)*5);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the numbers: \n");
        scanf("%d",&p[i]);
    }
    int sum =0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum+p[i];
    }
    float avg = sum/5;
    printf("The average of the elements = %f",avg);
}