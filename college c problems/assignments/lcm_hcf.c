#include <stdio.h>
int main()
{
    int a = 0, b = 0, x = 0, y = 0, t = 0;
    int gcd = 0, lcm = 0;
    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);
    a = x;
    b = y;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    gcd = a;
    lcm = (x * y) / gcd;
    printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
    printf("Least common multiple of %d and %d = %d\n", x, y, lcm);
    return 0;
}
