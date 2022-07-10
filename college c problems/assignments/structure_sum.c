#include <stdio.h>
typedef struct 
{
    int a;
    float b;
}Node;
int main()
{
    Node V1,V2,V3;
    printf("Enter the integer value of V1: ");
    scanf("%d",&V1.a);
    printf("Enter the float value of V1: ");
    scanf("%f",&V1.b);
    printf("Enter the integer value of V2: ");
    scanf("%d",&V2.a);
    printf("Enter the float value of V2: ");
    scanf("%f",&V2.b);
    V3.a = V1.a + V2.a;
    V3.b = V1.b + V2.b;
    printf("Sum of integers = %d\n",V3.a);
    printf("Sum of floats = %f",V3.b);
    return 0;
}