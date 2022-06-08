#include <stdio.h>
int main()
{
    int  n = 0;
    printf("Enter the month number: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("The number of days in the month is 31 days.");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("The number of days in the month is 30 days.");
            break;
        case 2:
            printf("The number of days in the month is 28 days.");
            break;
        default:
            printf("WRONG INPUT!");
    }
    return 0;
}