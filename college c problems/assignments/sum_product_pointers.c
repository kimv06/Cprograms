#include <stdio.h>
int sum(int *a,int *b)
{
    int sum = *a + *b;
}
int product(int *a,int *b)
{
    int pro =  *a * *b;
}
int main()
{
    int a = 0,b = 0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The sum of the numbers = %d\n",sum(&a,&b));
    printf("The product of the numbers = %d",product(&a,&b));
    return 0;
}