#include <stdio.h>
int swap(int *a,int *b)
{
    int temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int a = 0, b = 0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The numbers before swapping: %d %d\n",a,b);
    swap(&a,&b);
    printf("The numbers after swapping: %d %d",a,b);
    return 0;
}