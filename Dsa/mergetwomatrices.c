#include <stdio.h>
#include <stdlib.h>
int main(){
    int size1=0,size2=0,size3=0;
    printf("Enter the size of first matrix: ");
    scanf("%d",&size1);
    int *p = (int*)malloc(sizeof(int)*size1);
    printf("Enter the values of first matrix:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Enter the size of second matrix: ");
    scanf("%d",&size2);
    int *q = (int*)malloc(sizeof(int)*size2);
    printf("Enter the values of second matrix:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&q[i]);
    }
    size3 = (size1+size2);
    int *r = (int*)malloc(sizeof(int)*size3);
    for (int i = 0; i < size1; i++)
    {
        r[i] = p[i];
        //r[size1+i] = q[i];
    }
    for (int i = 0; i < size2; i++)
    {
        r[size1+i]=q[i];
    }
    printf("The merged matrix is : \n");
    for (int i = 0; i < size3; i++)
    {
        printf("%d ",r[i]);
    }
    
}