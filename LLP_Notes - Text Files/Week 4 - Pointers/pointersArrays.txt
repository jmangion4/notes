#include <stdio.h>

int main(void)
{
    int myArray[5] = {10, 20, 30, 40, 50};

    printf("The value in the first element of the array is: %d\n", myArray[0]);    // Output: 10
    printf("The address of the first element of the array is: %p\n", &myArray[0]); // Output: Address of the first element

    printf("------------------------------\n");

    // %p is the format specifier for printing addresses (pointers) in C. It will print the address in a platform-dependent format, typically hexadecimal.

    // Very Important: The name of the array (myArray) is a pointer to the first element of the array. So, myArray is equivalent to &myArray[0].

    printf("The address of location 0 is: %p\n", myArray); // Output: Address of the first element (same as &myArray[0])
    printf("The address of location 1 is: %p\n", myArray + 1);
    printf("The address of location 2 is: %p\n", myArray + 2);

    printf("------------------------------\n");

    /*
    In general, the address of the nth element of an array can be calculated as: &myArray[n] or myArray + n, where n is the index of the element (starting from 0).

    How can we access the values using the addresses?

    We can use the dereference operator (*) to access the value at a specific address. For example, to access the value of the first element of the array, we can use *myArray or *(&myArray[0]), which will both give us the value 10.
    */

    printf("The value at location 0 is: %d\n", *myArray);       // Output: 10
    printf("The value at location 1 is: %d\n", *(myArray + 1)); // Output: 20

    printf("------------------------------\n");

    // Array indexing
    printf("Array indexing:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("The value at location %d is: %d\n", i, myArray[i]);
    }

    printf("------------------------------\n");

    // Pointer indexing
    printf("Pointer indexing:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("The value at location %d is: %d\n", i, *(myArray + i));
    }

    printf("------------------------------\n");

    // What happens if we try to access an index that is out of bounds?
    printf("The value at location 5 using array indexing is: %d\n", myArray[5]);
    // This is out of bounds and can lead to undefined behavior. It may print a garbage value or cause a runtime error.
    printf("The value at location 5 using pointer indexing is: %d\n", *(myArray + 5));

    // In this case, since myarray has only 5 elements (indexed from 0 to 4), accessing index 5 accesses the variable i used in a previous loop, leading to an output equal to i // Output: 5
}