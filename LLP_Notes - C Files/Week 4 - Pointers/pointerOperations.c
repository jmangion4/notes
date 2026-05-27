#include <stdio.h>

int main(void)
{
    int num = 50;
    int *p = &num;

    // Declare a new pointer q and assign it to p
    int *q = p; // Copies the address stored in p to q, so now both p and q point to the same memory location where num is stored.

    // Print the values
    printf("Value of num: %d\n", num);         // Output: 50
    printf("Value pointed to by p: %d\n", *p); // Output: 50
    printf("Value pointed to by q: %d\n", *q); // Output: 50

    // We can use the comparison operator to check if p and q point to the same location
    (p == q) ? printf("p and q point to the same location\n") : printf("p and q point to different locations\n");

    // We can also compare the data in the memory cells pointed to by p and q
    (*p == *q) ? printf("The values pointed to by p and q are the same\n") : printf("The values pointed to by p and q are different\n");

    // What happens when you increment a pointer?
    // The compiler will calculate the new address based on the size of the data type the pointer is pointing to. For example, if p is an int pointer and we increment it, it will move to the next integer location in memory, which is typically 4 bytes on a 32-bit system or 8 bytes on a 64-bit system.
    printf("Address stored in p before incrementing: %p\n", p);
    p++;
    printf("Address stored in p after incrementing: %p\n", p);

    // Do the same with a char pointer
    char ch = 'A';
    char *charPtr = &ch;
    printf("Address stored in charPtr before incrementing: %p\n", charPtr);
    charPtr++;
    printf("Address stored in charPtr after incrementing: %p\n", charPtr);

    // Worksheet 2 ALL and revise all programs
}