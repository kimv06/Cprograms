#include <stdio.h>
int main()
{
    int yr;
    printf("Enter the year :\n");
    scanf("%d", &yr);
    if ((yr % 400 == 0) || ((yr % 100 !=0)  && (yr % 4 == 0)))
        printf("The year is leap year.");
    else
        printf("The year is not leap year.");
    return 0;
}