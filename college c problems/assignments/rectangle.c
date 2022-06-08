#include <stdio.h>
int main(){
    float l = 0.0,b = 0.0;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f",&l,&b);
    float area = (l*b);
    float peri = 2*(l+b);
    printf("The area of rectangle of length %f unit and breadth %f unit = %f unit",l,b,area);
    printf("\nThe perimeter of rectangle of length %f unit and breadth %f unit = %f unit",l,b,peri);
    return 0;
}