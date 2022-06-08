#include <stdio.h>
int swap(int *x, int *y)
{
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}
int main()
{
    int a = 0 , b = 0;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nThe two numbers before swapping are %d and %d.",a,b);
    swap(&a,&b);
    printf("\nThe two numbers after swapping are %d and %d.",a,b);
    return 0;
}