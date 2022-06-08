#include <stdio.h>
int prime(int n)
{
    int c = 0;
    for(int i = 1;i <= n/2;i++)
    {
        if(n%i == 0)
            c++;
    }
    if(c != 1)
        return 0;
    else
        return 1;
}
int fact(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            if(prime(i) == 1)
                printf("%d ",i);
        }
    }
}
int main()
{
    int n = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The prime factors of the number %d are: \n",n);
    fact(n);
    return 0;
}