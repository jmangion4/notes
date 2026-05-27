#include <stdio.h>
#include <string.h>
#include <ctype.h>

_Bool isNumeric(char str[])
{
    if (!str)
    {
        return 0;
    }

    for (int i = 0; i < strlen(str); i++)
    {
        char ch = str[i];
        if (!(isdigit(ch)))
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    if (isNumeric("Test message.") == 1)
    {
        printf("Contains only digits.\n");
    }
    else
    {
        printf("Contains non-digits.\n");
    }

    if (isNumeric("123") == 1)
    {
        printf("Contains only digits.\n");
    }
    else
    {
        printf("Contains non-digits.\n");
    }
}