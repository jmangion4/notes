#include <stdio.h>

int main(void)
{
    /*
    In this exercise we are trying to see what happens when you increment pointers. 
    (a) Set a pointer to point to an integer variable; 
    (b) Display the contents of the pointer. 
    (c) Increment the pointer by 1.  What happens?  Why? 
    (d) Can you display the contents of the memory cell to which the pointer is now pointing? 
    (e) Can you change the contents of the memory cell to which the pointer is now pointing?
    */

    int number =50;
    int * num = &number;

    printf("Contents of pointer: %d\n",*num);

    num++;
    // if int is 4 bytes on your system, the address increases by 4.
    printf("Contents of pointer: %d\n",*num);
    

}