#include <stdio.h>

/*
2. In this exercise we are trying to see how to link a pointer to another variable. 
(a) Declare a pointer to integer, called ip and set it to NULL. 
(b) Declare an integer called number and set a value in it. 
(c) Set your pointer to point to the variable number. 
(d) Display the contents of the pointer ip.  What does this value represent? 
(e) Display the value of the variable to which the pointer ip is pointing (use only ip variable).   
This operation is called dereferencing a pointer. 
(f) Display the actual physical address of the pointer variable, ip.  
This is the address of where the pointer is stored on stack. 
(g) Change the value of the variable number by using only the pointer ip. 
(h) Write code to show that the contents of number has been changed. 

*/

int main(void)
{
    int* ip;
    ip = NULL;

    int number = 50;

    ip = &number;

    // contents of the ip
    printf("%p\n", ip);

    // contents of variable pointed to by ip
    printf("%d\n", *ip);

    // actual address of pointer variable ip
    printf("Address of ip itself: %p\n", &ip);

    // change number using only ip
    *ip = 100;

    // contents of variable pointed to by ip - to show content has been changed
    printf("%d\n", number);

}