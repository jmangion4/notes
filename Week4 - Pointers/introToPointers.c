#include <stdio.h>
#include <stdlib.h>
// for Malloc

/*
POWER POINT 6 - POINTERS
What is a Pointer?
- Special Variable that can store an ADDRESS

How to declare a Pointer?
- The reserved word 'pointer', doesnt exist
- because we also need to tell the compiler what DATA TYPE
  your pointer will ultimately point to.
- If the pointer is going to stroe the address a cell bound to store INT Only, 
  then your pointer has to be a pointer to INT.
- We say that a pointer is a DERIEBED Type.

We can can have a pointer to ANY Data Type
    - A pointer to int,
    - A point to chat,
    - A pointer to floar, etc
    - A pointer to FILE,
    - EVEN a pointer to a pointer

How do I display a pointer?
- use-format specifier 
    - %p or %x so display the ADDRESS in hex

Can I access the cell to which the pointer is pointint?
- OF COURSE! This is called dereferencing a pointer
- It is done by placing an * in front of the pointer 
For example: *ptr

*/

int main(void)
{

    // declare a pointer to int
    int* intPtr;
    // declate a pointer to float
    float* floatPtr;

    // what happens if you declare two pointer in one line? BE CAREFUL
    int * a, b; // Only 'a' is a pointer -> WRONG
    int *s, *t; // CORRECT

    // pointer to pointer to int
    int** doublePtr; // see later

    // declare a char ch
    char ch = 'A';

    // declare a pointer to char
    char* ptr;
    // set the address of ptr to that of ch - set ptr to POINT to ch
    ptr = &ch; // the address operator & is used to get the address of the variable ch
    

    printf("The address of ch is %p and its character is %c \n", &ch, ch);
    printf("The address stored in the pointer is %p \n", ptr);
    
    // use the pointer to change the character in ch, indirectly
    *ptr = 'B'; // here we are dereferencing the pointer, using the pointer to access the cell it points to

    printf("The new value is: %c \n", ch);



}