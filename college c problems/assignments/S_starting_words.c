#include <stdio.h>
#include <stddef.h>
int main()
{
    char str[100];
    int i = 0 , j = 0 , c = 0;
    char k;
    printf("Enter the string: ");
    gets(str);
    printf("Entered sentence : %s\n",str);
    if(str[0] == 'S' || str[0] == 's')
        c++;
    for (int i = 0; i < sizeof(str); i++)
    {
        if(str[i] == ' ')
        {
            k = str[i+1];
            if(k == 'S' || k == 's')
                c++;
        }
    }
    printf("The number of words starting with 's' are %d",c);
    return 0;
}