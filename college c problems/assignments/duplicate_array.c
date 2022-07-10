#include <stdio.h>
int duplicate(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    printf("Array after deleting the duplicates: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }
    duplicate(arr,n);
    return 0;
}