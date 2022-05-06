#include<stdio.h>
// #include<stdlib.h>

void CyclicSwap(int* num1,int* num2,int* num3)
{
    int temp = *num1;
    *num1 = *num3;
    *num3 = *num2;
    *num2 = temp;  
}
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the value of a,b and c respectively\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("The values of a,b,c before swapping:  a = %d b = %d c = %d ",a,b,c);
    CyclicSwap(&a,&b,&c);
    printf("\nThe values of a,b,c after swapping:  a = %d b = %d c = %d ",a,b,c);
    return 0;
}