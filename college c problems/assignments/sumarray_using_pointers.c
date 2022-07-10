#include <stdio.h>
#include <stdlib.h>
int sum(int *p,int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=*(p+i);
    }
    printf("Sum of elements of array using pointers: %d",sum);
}
int main()
{
    int *p , n = 0 ;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    p = (int *)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d",(p+i));
    }
    sum(p,n);
    return 0;
}