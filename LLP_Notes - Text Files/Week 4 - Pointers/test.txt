#include <stdio.h>

void funOne()
{
    int numOne = 40;
    printf("Hello from funOne");
}

void funTwo()
{
    int numTwo = 50;
    printf("Hello from funTwo");
    funTwo();
}

int main(void)
{
    int numMain = 5;
    funOne();
}