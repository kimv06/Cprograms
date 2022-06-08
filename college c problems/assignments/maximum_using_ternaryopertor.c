#include <stdio.h>
int main()
{
    int a = 0,b = 0,c = 0;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    int x = (a>b && a>c)? a:(b>c)? b:c;
    printf("The maximum of the three numbers is %d",x);
    return 0;
}