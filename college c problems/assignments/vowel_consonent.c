#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        printf("%c is a vowel.",ch);
    else
        printf("%c is a consonent",ch);
    return 0;
}