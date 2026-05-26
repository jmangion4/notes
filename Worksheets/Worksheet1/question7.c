#include <stdio.h>
#include <limits.h>

int main(void) {
    /*
        Write a program to demonstrate the problem of overflow.  
        Try to predict the value that will be displayed.  
        For example:  You can declare an integer and store the largest positive value it can 
        store. Add 1 to the value.  What is the actual bit pattern stored?  What is the value of this 
        number?  How can overflow be avoided?
    */

   
    int x = INT_MAX;      // Largest positive int
    int y = x + 1;        // This causes overflow

    printf("INT_MAX = %d\n", x);
    printf("INT_MAX + 1 = %d\n", y);

    // Show the bit pattern using unsigned int
    unsigned int bits = (unsigned int) y;
    printf("Bit pattern (as unsigned) = %u\n", bits);

    return 0;


}