// Remember that any commands that are proceeded with # are called preprocessor directives.
// These commands are carried out by the preprocessor, the first stage of the compilation process.
// #include will add the code of the header file
// #define will traspose the constant or macro in the source code before compilation

#include <stdio.h>
#define PI 3.142
#define BADMULTIPLY(x, y) (x * y)
#define GOODMULTIPLY(x, y) ((x) * (y))

int main(void)
{
    printf("The value of PI is: %5.3f", PI);
    printf("\nThe multiplication of (10-5) and 2 is: %d", BADMULTIPLY(10 - 5, 2));
    printf("\nThe multiplication of (10-5) and 2 is: %d", GOODMULTIPLY(10 - 5, 2));
}