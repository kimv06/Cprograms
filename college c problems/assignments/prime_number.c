#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int c = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if(n%i == 0)
            c++;
    }
    if(c!=1)
        printf("The number is not prime.");
    else
        printf("The number is prime.");
    return 0;
}