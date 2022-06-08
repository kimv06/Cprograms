#include <stdio.h>
int main()
{
    int n = 0;
    float rate = 0;
    printf("Enter the number of calls: ");
    scanf("%d",n);
    if(n<=100){
        rate = 250+(n*(0.2));
    }
    else if(n>100 && n<=200){
        rate = 250+((100*0.2)+((n-100)*(0.3)));
    }
    else{
        rate = 250+((100*0.2)+(100*0.3)+((n-200)*(0.5)));
    }

    printf("The telephone bill is %f",rate);
}