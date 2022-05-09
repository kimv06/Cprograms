#include <stdio.h>
#include <stdlib.h>
int main(){
    int size1=0,size2=0,size3=0;
    int i = 0 , j = 0 , k = 0;
    printf("Enter the size of first matrix: ");
    scanf("%d",&size1);
    int *p = (int*)malloc(sizeof(int)*size1);
    printf("Enter the values of first matrix in sorted order:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Enter the size of second matrix: ");
    scanf("%d",&size2);
    int *q = (int*)malloc(sizeof(int)*size2);
    printf("Enter the values of second matrix in sorted order:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&q[i]);
    }
    size3 = (size1+size2);
    int *r = (int*)malloc(sizeof(int)*size3);
    while(i<size1 && j<size2){
        if(p[i]<q[j]){
            r[k]=p[i];
            i++;
        }
        else{
            r[k]=q[j];
            j++;
        }
        k++;
    }
    if(i>=size1){
        while(j<size2){
            r[k]=q[j];
            j++;
            k++;
        }
    }
    if(j>=size2){
        while(i<size1){
            r[k]=p[i];
            i++;
            k++;
        }
    }
    printf("The merged matrix : \n");
    for (int i = 0; i < size3; i++)
    {
        printf("%d ",r[i]);
    }
    return 0;
}    

        
