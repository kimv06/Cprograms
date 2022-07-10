#include <stdio.h>
int esum(int a[][50],int m,int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j]%2 == 0)
                sum+=a[i][j];
        }
    }
    printf("The sum of even elements of the array = %d\n",sum);
}
int osum(int a[][50],int m,int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j]%2 != 0)
                sum+=a[i][j];
        }
    }
    printf("The sum of odd elements of the array = %d",sum);
}
int main()
{
    int m = 0 , n = 0;
    int arr[50][50];
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a number: ");
            scanf("%d",&arr[i][j]);
        }
    }
    esum(arr,m,n);
    osum(arr,m,n);
    return 0;
}