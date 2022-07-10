#include <stdio.h>
int main()
{
    char str[100];
    int sum = 0 , i = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0')
    {
        sum += (int)str[i];
        i++;
    }
    printf("The sum of ascii values of the characters = %d",sum);
    return 0;
}
