//2D array
#include <stdio.h>
#include <stdlib.h>
int main()
{
     int** pt;
     pt = (int**)malloc(sizeof(int)*3);
     for (int i = 0; i < 3; i++)
         {
             *(pt+i) = (int*)malloc(sizeof(int)*2);
         }
         for (int i = 0; i < 3; i++)
        {
         for (int j = 0; j < 3; j++)
         {
             printf("Enter the value at %d%d ",i,j);
             scanf("%d",&pt[i][j]);//*(*(pt+i)+j)
         }
        
        }
     printf("The values are\n");
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             printf("%d ",pt[i][j]);
         }
         printf("\n");    
     }
     return 0;
}