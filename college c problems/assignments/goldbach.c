#include <stdio.h>
int isPrime(int n)
{
    int c = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c != 1)
        return 0;
    else
        return 1;
}
int main()
{
    int n = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 2; i <= n/2; i++)
    {
        if(isPrime(i)==1){
            if(isPrime(n-i)==1){
                printf("%d %d",i,n-i);
                printf("\n");
            }
        }
    }
    return 0;
}
