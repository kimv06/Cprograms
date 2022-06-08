#include <stdio.h>
long int fact(int n)
{
    long int f = 1;
    for (int i = 1; i <= n ; i++)
    {
        f = f*i;
    }
    return f;
}
int main()
{
    int n = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %ld.",n,fact(n));
    return 0;
}