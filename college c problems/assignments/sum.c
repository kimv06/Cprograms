#include <stdio.h>
int main(){
    float a = 0.0,b = 0.0;
    printf("Enter the two numbers: ");
    scanf("%f %f",&a,&b);
    float sum = (a+b);
    printf("The sum of %f and %f = %f",a,b,sum);
    return 0;
}