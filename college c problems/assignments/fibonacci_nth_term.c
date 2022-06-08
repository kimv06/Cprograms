#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3 = 0, n = 0;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("The %dth term of fibonacci series is: ",n);
    for (int i = 2; i < n; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    printf("%d",n3);
    return 0;
}