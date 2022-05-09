//1D array
#include <stdio.h>
#include <stdlib.h>
int main()
{
     int i = 0;
     int* pt;
     pt = (int*)malloc(sizeof(int)*5);
     for (i = 0; i < 5; i++)
     {
         printf("Enter the element at %d ",i);
         scanf("%d",&pt[i]);//*(pt+i)
     }
     printf("The elements are: ");
     for (i = 0; i < 5; i++)
     {
         printf("%d ",*(pt+i));
     }
     return 0;
}