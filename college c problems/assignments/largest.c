#include <stdio.h>
int main(){
    int a , b , c;
    printf("Enter the three number: \n");
    scanf("%d %d %d",&a , &b , &c);
    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("%d is Largest.",a);
            printf("\n%d is smallest.",c);
        }
        else
        {
            printf("%d is Largest.",a);
            printf("\n%d is smallest.",b);
        }
        
    }
    if(b>c && b>a)
    {
        if(c>a)
        {
            printf("%d is Largest.",b);
            printf("\n%d is smallest.",a);
        }
        else{
            printf("%d is Largest.",b);
            printf("\n%d is smallest.",c);
        }  
    }
    if(c>a && c>b)
    {
        if(a>b)
        {
            printf("%d is Largest.",c);
            printf("\n%d is smallest.",b);
        }
        else
        {
            printf("%d is Largest.",c);
            printf("\n%d is smallest.",a);
        }
    }
    return 0;
}