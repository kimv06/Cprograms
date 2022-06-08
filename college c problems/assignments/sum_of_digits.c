#include <stdio.h>
int main()
{
    int n = 0;
    int b = 0, sum = 0 , t = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    t = n;
    while(n>0)
    {
        b=n%10;
        sum+=b;
        n/=10;
    }
    printf("The sum of the digits of %d = %d",t,sum);
    return 0;
}