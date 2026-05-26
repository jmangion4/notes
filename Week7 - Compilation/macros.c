// Remember that any commands that are proceeded with # are called preprocessor directives
// These commands are carried out by the preprocessor, the first stage of compilation
// #include will add the code of the header file
// #define will transp;ose the constant or macro in the source code

#include <stdio.h>
#define PI 3.142
#define BADMULTIPLY(x,y) (x*y)
#define GOODMULTIPLY(x,y) ((x)*(y))
// Precedence of Operators -> Brackets are needed or multiplication will not be worked out correctly

int main(void)
{
    printf("The Value of PI is %5.3f\n", PI);
    
    printf("The BAD multiplication of 10-5 and multiplied 2 is: %d\n ", MULTIPLY(10-5,3));
    printf("The GOOD multiplication of 10-5 and multiplied 2 is: %d\n ", MULTIPLY(10-5,3));
}