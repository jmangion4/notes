#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Allocate memory for one dynamic integer on heap, fill it up with data then display it.

    int *p = (int *)malloc(sizeof(int)); // malloc returns a void pointer, so we need to cast it to the appropriate type (int * in this case). The sizeof(int) function returns the size of an integer in bytes, which is typically 4 bytes on a 32-bit system and 8 bytes on a 64-bit system. If the memory allocation is successful, malloc will return a pointer to the allocated memory. If it fails, it will return NULL.

    *p = 123; // Here we are dereferencing the pointer p to access the memory cell it points to and assigning the value 123 to that cell.

    printf("The value stored in the memory cell pointed to by p is: %d\n", *p); // Output: 123

    // Always remember to free the memory you have allocated once you are done using it to avoid memory leaks.
    free(p); // This will deallocate the memory that was allocated for the integer. After this call, the memory is returned to the system and can be reused for other purposes.

    // If this is not done, the program will have a memory leak, which means that the allocated memory is not returned to the system and cannot be used again until the program terminates. In long-running programs or those that allocate memory in a loop, this can lead to excessive memory usage and eventually cause the program to crash or slow down significantly due to lack of available memory.

    // After freeing the memory, it is good practice to set the pointer to NULL to avoid dangling pointers.
    p = NULL; // This prevents accidental dereferencing of a pointer that points to freed memory, which would lead to undefined behavior.
}
