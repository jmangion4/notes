#include <stdio.h>
void funTwo()
{
    int numTwo = 50;
    printf("Hello from funTwo\n");
}

void funOne()
{
    int numOne = 40;
    printf("Hello from funOne\n");
    funTwo();
}


int main(void) {
    int numMain = 5;
    funOne();

}

