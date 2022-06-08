#include <stdio.h>
int main(){
    int a = 0,b = 0; 
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The value of a and b before swapping are %d and %d.",a,b);
    int temp = b;
    b=a;
    a=temp;
    printf("\nThe value of a and b after swapping are %d and %d.",a,b);
    return 0;
}
