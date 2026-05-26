#include <stdio.h>
#include <limits.h> 
// functions to get the Minimum and Maximum Values


int main (void){


    printf("The MIN value of a CHAR is: %d \n", CHAR_MIN);
    printf("The MAX value of a CHAR is: %hd \n", CHAR_MAX);
    
    printf("The MIN value of a SHORT is: %hd \n", SHRT_MIN);
    printf("The MAX value of a SHORT is: %hd \n", SCHAR_MAX);
    
    printf("The MIN value of a INT is: %d \n", INT_MIN);
    printf("The MIN value of a INT is: %d \n", INT_MAX);
    
        // do the same for all the other types

    // What is the difference between Signed and Unsigned numbers?
    // Lets work with char because it is the Smallest Type

    // What is the range of values of an UNSIGNED CHAR ?#
    // Smallest value if always 0 for Unsigned Types
    printf("The MAX value of an UNSIGNED CHAR is: %d \n", UCHAR_MAX);

    printf("The MIN value of a SIGNED CHAR is: %d \n", CHAR_MIN);
    printf("The MAX value of a SIGNED CHAR is: %hd \n", CHAR_MAX);
    
    // Notice that by declaring a data stype as UNSIGNED, we can store a larger
    // range of cvalues than a SGINED Type. IN THE SAME SPACE: Obviously we do this only
    // if we do not need negative numbers.
    
}