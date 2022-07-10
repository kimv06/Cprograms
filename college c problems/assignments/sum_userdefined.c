#include <stdio.h>
int sum(int *p,int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=*(p+i);
    }
    printf("\nSum of the elements: %d",sum);
}
int main()
{
    int n = 0 , *p ;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d",(p+i));
    }
    printf("The Entered Array :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
    sum(p,n);
    return 0;
}