#include <stdio.h>
int main(){
    float a = 0.0,b = 0.0,c= 0.0;
    printf("Enter the three numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    float sum = (a+b+c);
    float avg = (sum/3);
    printf("The sum of %f , %f and %f = %f",a,b,c,sum);
    printf("\nThe average of %f , %f and %f = %f",a,b,c,avg);
    return 0;
}