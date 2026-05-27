#include <stdio.h>

void badswap(int a, int b)
{

    int temp = a; // make a copy of value a
    a = b;        // copy the value of b
    b = temp;     // copy the old value of a
}

void goodswap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("BEFORE BAD SWAP X: %d\tY: %d\n", x, y);
    badswap(x, y); // This is a CALL BY VALUE. A copy of the value of x is sent to the corresponding input parameter a. ANY CHANGES that happen to a will not affect x.
    printf("AFTER BAD SWAP X: %d\tY: %d\n", x, y);

    printf("======================================\n");

    printf("BEFORE GOOD SWAP X: %d\tY: %d\n", x, y);
    goodswap(&x, &y); // This is a CALL BY REFERENCE. The ADDRESS of x is sent to the POINTER to integer, a.
    printf("AFTER GOOD SWAP X: %d\tY: %d\n", x, y);
}