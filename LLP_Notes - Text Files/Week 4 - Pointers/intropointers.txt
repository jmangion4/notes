#include <stdio.h>
#include <stdlib.h>

/*
    What is a pointer?
        - A pointer is a special variable that can store an ADDRESS.

    How do we declare a pointer?
        - The reserved word 'pointer' does not exist, because we also need to tell the compiler what kind of data your pointer will ultimately point to. if the pointer is going to store the address if a memory cell bound to store integer only, then your pointer has to be a pointer to integer.
        - We say that a pointer is a derived type.

    What kind of pointer can we have?
        - Any.
        - Example: A pointer to int, a pointer to char, a pointer to float, ..., pointer to FILE, even a pointer to a pointer.

    How do I display a pointer?
        - Use format specifier %p or %x to display the address in Hex.

    Can I access the cell to which the pointer is pointing?
        - Yes, this is called dereferencing a pointer and it is done by placing an * infront of the pointer.
        - Example: *ptr
*/

int main(void)
{
    // declare a pointer to int
    int *intPtr;

    // declare a pointer to float
    float *fltPtr;

    // What happens if you declare two pointers in one line? (Be Careful)
    int *a, b;  // only a is a pointer!
    int *s, *t; // both pointer

    // declare a pointer to a pointer to int (double pointer - see later)
    int **doublePtr;

    // declare to char ch
    char ch = 'A';

    // declare a pointer to point to ch
    char *ptr;

    // set the address of ptr to that of ch - set ptr to POINT to ch
    ptr = &ch; // The address operator & is used to get the address of the variable ch.

    printf("The address of ch is %p and its character is %c \n", &ch, ch);
    printf("The address stored in the pointer is %p\n", ptr);

    // Use the pointer to change the character in ch, indirectly.
    *ptr = 'B'; // Here we are dereferencing the pointer, using the pointer to access the cell it points to

    printf("The new value is: %c \n", ch);
}