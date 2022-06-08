#include <stdio.h>
int main()
{
    int n = 0 , b = 0, c = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The number is %d.",n);
    while(n>0)
    {
        b = n%10;
        c = b+(10*c);
        n/=10;
    }
    printf("\nThe reverse of the number is %d.",c);
    return 0;
}