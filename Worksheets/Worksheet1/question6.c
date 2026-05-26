#include <stdio.h>
#include <limits.h> 
// Import to get the Minimum and Maximum Values
#include <float.h>
// Import to get Min and Max of Float
int main(void) {
    /*
    Use the function sizeof() to display the size in bytes of all C basic data types.  Display also the 
    minimum and maximum value of each type where applicable.  Display the data in tabular format 
    using ‘\t’.
    */

    printf("Size in bytes of all Basic Data Types\n");
    printf("\n");
    printf("\n");
    printf("The character has %zu byte\n", sizeof(char));
    printf("The short int has %zu bytes\n", sizeof(short int));
    printf("The int has %zu bytes\n", sizeof(int));
    printf("The Long Int has %zu bytes\n", sizeof(long int));
    printf("The Long Long Int has %zu bytes\n", sizeof(long long int));
    printf("The Float has %zu bytes\n", sizeof(float));
    printf("The Double has %zu bytes\n", sizeof(double));
    printf("The Long Double has %zu bytes\n", sizeof(long double));
    printf("The _Bool has %zu bytes\n", sizeof(_Bool));

    printf("The minimum and maximum value of each type where applicable");
    printf("\n");
    printf("\n");

    printf("The MIN value of a CHAR is: %d \n", CHAR_MIN);
    printf("The MAX value of a CHAR is: %hd \n", CHAR_MAX);
    
    printf("The MIN value of a SHORT INT is: %hd \n", SHRT_MIN);
    printf("The MAX value of a SHORT INT is: %hd \n", SCHAR_MAX);
    
    printf("The MIN value of a INT is: %d \n", INT_MIN);
    printf("The MIN value of a INT is: %d \n", INT_MAX);

    printf("The MIN value of a LONG INT is: %ld \n", LONG_MIN);
    printf("The MIN value of a LONG INT is: %ld \n", LONG_MAX);

    printf("The MIN value of a LONG LONG INT is: %lld\n", LLONG_MIN);
    printf("The MIN value of a LONG LONG INT is: %lld \n", LLONG_MAX);

    printf("The MIN value of a FLOAT is: %f \n", FLT_MIN);
    printf("The MIN value of a FLOAT is: %f \n", FLT_MAX);

    printf("The MIN value of a DOUBLE is: %e \n", DBL_MIN);
    printf("The MIN value of a DOUBLE is: %e \n", DBL_MAX);

    printf("The MIN value of a LONG DOUBLE is: %lf \n", LDBL_MIN);
    printf("The MIN value of a LONG DOUBLE is: %lf \n", LDBL_MAX);
}