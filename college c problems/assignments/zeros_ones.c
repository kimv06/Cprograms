#include <stdio.h>
int main()
{
    int n = 0;
    int count_zero=0;
    int count_one=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0){
        if(n&1==1)
            count_one++;
        else
            count_zero++;
        n=n>>1;
    }
    printf("The number of zeros is %d and the number of ones is %d.",count_zero,count_one);
    return 0;
}