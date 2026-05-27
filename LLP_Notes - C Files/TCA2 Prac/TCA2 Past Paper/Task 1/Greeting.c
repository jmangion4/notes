#include <stdio.h>

int main(void)
{
    printf("Enter your name: ");
    char name[30];
    scanf("%29s", name);
    printf("Good morning, %s", name);
}