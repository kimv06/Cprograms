#include <stdio.h>
#include <math.h>
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n,x,i,k=1;
    float s = 0;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    for (i = 1; i <= n; i+=2)
    {
        float p = pow(x,i);
        int f = fact(i);
        if(k % 2 == 0)
            s += p/f;
        else
            s -= p/f;
        k++;
    }
    printf("\nThe sum of the series is %f",s);
    printf("\nThe factorial of n = %d",fact(n));
    return 0;
}
