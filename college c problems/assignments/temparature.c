#include <stdio.h>
int main(){
    float c = 0.0;
    printf("Enter the temparature in celcius: ");
    scanf("%f",&c);
    float f=((9*c)/5)+32;
    printf("The temparature in fahrenheit is %f",f);
    return 0;
}
