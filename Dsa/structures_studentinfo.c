#include <stdio.h>
typedef struct st
{
    int marks;
    char grade;

}bag;
int main()
{
    bag arr[4];
    char a;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the grade\n");
        scanf("%c",&arr[i].grade);
        scanf("%c",&a);
        printf("Enter the marks\n");
        scanf("%d",&arr[i].marks);
        scanf("%c",&a);
    }
    printf("The details are\n");
    for (int i = 0; i < 4; i++)
    {
        printf("The details of %d student is\n",(i+1));
        printf("The marks is %d and grade is %c \n",arr[i].marks,arr[i].grade);
    }
    return 0;
}