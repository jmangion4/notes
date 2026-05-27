#include <stdio.h>
#define MAX 10
#define MULTIPLY(x, y) ((x) * (y))

// This is a comment
/*
    This is a longer comment
*/

/*
    The command for each step are as follows:
    1. Preprocessing: gcc -E usingMacros.c -o usingMacros.i
    2. Compilation: gcc -S usingMacros.i -o usingMacros.s
    3. Assembly: gcc -c usingMacros.s -o usingMacros.o
    4. Linking: gcc usingMacros.o -o usingMacros.exe
*/

int main(void)
{
    printf("The value of MAX is: %d", MAX);
    printf("\nThe multiplication of 5 and 3 is: %d", MULTIPLY(5, 3)); // After the preprocessor runs, this line will be transformed to: printf("\nThe multiplication of 5 and 3 is: %d", ((5) * (3)));
}