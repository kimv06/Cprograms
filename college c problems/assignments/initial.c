#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100],k;
    int i = 0;
    printf("Enter a name: ");
    gets(str);
    printf("The initials are: ");
    printf("%c.",toupper(str[0]));
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        printf("%c.",toupper(str[i+1]));
        i++;
    }
    return 0;
}