#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int count = 0, b = 0, sum = 0, t = 0;
    int p = 1;
    t = n;
    while (t > 0)
    {
        b = t % 10;
        t /= 10;
        count++;
    }
    t = n;
    while (n > 0)
    {
        p = 1;
        b = n % 10;
        n /= 10;
        for (int i = 1; i <= count; i++)
        {
            p = p * b;
        }
        sum = sum + p;
    }
    if (sum == t)
        printf("Armstrong number.");
    else
        printf("Not a Armstrong number.");
    return 0;
}