#include <stdio.h>

int main(void)
{
    /*
        In this program we are dereferencing an uninitialized pointer.
        This is dangerous code, because the pointer will have an aritrary address.
        This could be a memory cell which is protected by the OS, or even a variable in your own program.
        We say that the program had UNDEFINED BEHAVIOR. It might appear to be working, but other times a segmentation fault error might be thrown by the OS. The fact that it is comiling and running does not mean all is good - silent failure - the output does not show that something is wrong.
        It is good programming practice to always compile using -Wall option so that the compiler warns you.
    */

    /*
        // BAD pointers
        int *iPtr;

        // What happens if you to use the pointer?
        *iPtr = 123; // changing the value of a random memory cell

        printf("The address stored in iPtr is %p\n", iPtr);
        printf("The data stored in the memory cell pointed to by iPtr is %d\n", *iPtr);
    */

    /*Good programming practice
        If you have a pointer but you aren't using it yet, set it to NULL.
        NULL is macro that means 0. Address 0 is a 'safe' location where to part your pointers.
        It is common convention that address 0 on all systemss is readonly, and if you try to dereference this location no harm will be done.
        When you have a function that returns a pointer you should ALWAYS check for NULL before using it.
    */

    int *p;
    p = NULL; // park your pointer

    if (p == NULL) // if(!p)
    {
        printf("You cannot use the pointer\n");
    }
    else // if(p)
    {
        printf("You can use the pointer\n");
    }

    // Same as above using Ternary operator
    printf((!p) ? "You cannot use the pointer" : "You can use the pointer");

    // What is the size of a pointer?
    printf("The size of an integer pointer is %zu bytes \n", sizeof(int *));            // Size: 8 bytes on a 64-bit system, 4 bytes on a 32-bit system
    printf("The size of a char pointer is %zu bytes \n", sizeof(char *));               // Size: 8 bytes on a 64-bit system, 4 bytes on a 32-bit system
    printf("The size of a long long pointer is %zu bytes \n", sizeof(long long int *)); // Size: 8 bytes on a 64-bit system, 4 bytes on a 32-bit system

    // The size of a pointer depends on the compiler and target architecture.
    // A 32-bit system gives pointer size of 4 bytes which limits the max address to about 4GB. (2^32)-1 = 4,294,967,295 bytes.
    // A 64-bit system gives pointer size of 8 bytes which limits the max address to about 16 exabytes. (2^64)-1 = 18,446,744,073,709,551,615 bytes.
}