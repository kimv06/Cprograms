#include <stdio.h>
#include <stdlib.h>
// void swap(int *a, int *b)
// {
//     *a=*a+*b;
//     *b=*a-*b;
//     *a=*a-*b;
// }
int main()
{
    // int *p;
    // int sum=69;
    // p=&sum;
    // printf("%d",p);
    // printf("\n%d",*p);
    // int a = 69;
    // int b = 96;
    // printf("The value of a and b before swapping are %d and %d.",a,b);
    // swap(&a,&b);
    // printf("\nThe value of a and b after swapping are %d and %d.",a,b);
    // return 0;
    int *p = (int*)malloc(5*sizeof(int));
    // p[0] = 1;
    // p[1] = 2;
    // p[2] = 3;
    // p[3] = 4;
    // p[4] = 5;
    printf(" Enter the values of array:\n");
    for (int i = 0; i < 5; i++)
    {
        //scanf("%d",&p[i]);
        scanf("%d",(p+i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}