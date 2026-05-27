#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("CHAR Min: %d \n", CHAR_MIN);
    printf("CHAR Max: %hd \n", CHAR_MAX);

    printf("SHORT Min: %hd \n", SHRT_MIN);
    printf("SHORT Max: %hd \n", SHRT_MAX);

    printf("INT Min: %d \n", INT_MIN);
    printf("INT Max: %d \n", INT_MAX);

    // What is the difference between signed and unsigned numbers?
    // Lets's work with CHAR because its the smallest type

    // What is the range of an UNSIGED CHAR?
    // smallest value is always 0 for unsigned types

    printf("The max value of an UNSIGNED CHAR is: %d \n", UCHAR_MAX);

    printf("The min value of an SIGNED CHAR is: %d \n", CHAR_MIN);
    printf("The max value of an SIGNED CHAR is: %d \n", CHAR_MAX);

    // Notice that by declaring a data type as unsigned, we can store a larger range of values than a signed tpye, IN THE SAME PLACE!! Obviously, we d othis only if we do not need negative numbers.
}