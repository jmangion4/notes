#include <stdio.h>

int main(void) {
 
    /*
    In this exercise we are trying to see if you can store address values directly in a pointer. 
    Try this exercise on different compilers. 
    (a) Declare a pointer to integer numPtr. 
    (b) Set an arbitrary value to the address pointed to by numPtr.  What happens?  Why? 
    (c) Can we store a memory address in the pointer variable directly? 
    (d) What happens if you try to change the contents of this memory address? Why?
    
    */

    int *numPtr = NULL;
    // numPtr does not point to a valid int object. So dereferencing it 
    //means writing into some random place in memory -> This usually crashes the program 
    *numPtr = 10;
    
    // (c) Can we store a memory address in the pointer variable directly? 
    numPtr = (int*)1000;
    // does not mean the address is valid to use
    /*
    Can you store an address directly? Yes
    Is it safe to dereference arbitrary addresses? No
    */

    //(d) What happens if you try to change the contents of this memory address? Why?
    *numPtr = 25;

    // CONCLUSION
    // a pointer can store an address value directly, but dereferencing arbitrary 
    //addresses is unsafe and causes undefined behavior.
}   