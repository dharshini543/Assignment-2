#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character\n");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Entered character is capital Alphabet\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Entered character is small Alphabet\n");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("Entered character is Number\n");
    }
    else
    {
        printf("Entered special character\n");
    }
    return 0;
}
