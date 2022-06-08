#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0, temp = 0, last = 0, sq = 0,c = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;
    sq= n*n;
    while(temp>0)
    {
        c++;
        temp/=10;
    }
    int den = floor(pow(10,c));
    last = sq % den;
    if(last == n)
        printf("Automorphic Number.");
    else
        printf("Not a Automorphic Number.");
}
