#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    /*
    In this exercise we are learning how to allocate and free memory using pointers. 
    (a) Declare a pointer to integer ip. 
    (b) Allocate memory to the pointer by using malloc(). 
    (c) Store a value in the memory pointed to by your pointer. 
    (d) Write code to display the contents of the pointer and of the memory cell to which it is pointing. 
    (e)  Free memory allocated to the pointer by using free(). 
    (f) Write code to try to dereference the pointer ip after it is freed.  What happens? 

    */
    
    int *ip;

    // Allocate using Malloc()
    ip = (int *)malloc(sizeof(int));
    // malloc - adress of first location inisde HEAP

    // (c) Store a value in the allocated memory
    *ip = 42;

    // Display contents of the pointer and of the memory cell which it is pointing to
    printf("Address stored in ip (pointer itself): %p\n", *ip);
    printf("Value at that address (*ip): %d\n", *ip);

    // (e) Free the allocated memory
    free(ip);
    printf("ip has been freed.\n");

    // (f) Dereference ip AFTER freeing it (undefined behavior)
    printf("Value at ip after free: %d\n", *ip);  // UNDEFINED BEHAVIOR
    ip = NULL; // set ip to NULL after freeing.
}