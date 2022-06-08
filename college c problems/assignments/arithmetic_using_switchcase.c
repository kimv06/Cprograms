#include <stdio.h>
int main()
{
    int a = 0,b = 0;
    int s = 0;
    float p = 0;
    printf("Enter two numbers to perform desired calculation:");
    scanf("%d %d",&a,&b);
    printf("\n-----MENU-----");
    printf("\n1.Addition.");
    printf("\n2.Substraction.");
    printf("\n3.Multiplication.");
    printf("\n4.Division.");
    printf("\nEnter the number of operation to be performed:");
    scanf("%d",&s);
    switch(s)
    {
        case 1: 
            p = (a+b);
            printf("The sum of %d and %d is %f.",a,b,p);
            break;
        case 2:
            if(a>b)
                p=a-b; 
            else
                p=b-a;
            printf("The difference between %d and %d is %f",a,b,p);
            break;
        case 3:
            p = a*b;
            printf("The product of %d and %d is %f.",a,b,p);
            break;
        case 4:
            if(b!=0)
            {
                p=a/b;
                printf("The required calculation between %d and %d is %f.",a,b,p);
            }
            else
                printf("RUNTIME ERROR!");
            break;
        default:
            printf("WRONG INPUT!");
    }
    return 0;
}