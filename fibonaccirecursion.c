#include <stdio.h>
int fibo( int a, int b,int n)
{
    int sum=a+b;
    if(n==1)
    return sum;
    fibo(b,sum,n-1);
}
int main()
{
    int n;
    printf("Enter the nth number");
    scanf("%d",&n);
    int a=0,b=1;
    if(n==1){
    printf("0");
    }
    else if(n==2){
    printf("1");
    }
    else{
    printf("%d",fibo(a,b,n-2));
    }
}