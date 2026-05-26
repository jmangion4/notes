#include <stdio.h>

int main(void){
    
    /*
    3. In this exercise we are trying to see what happens when you assign pointers to each other. 
    (a)  Declare two pointers to character, cPtr1 and cPtr2. 
    (b) Declare a character variable ch and store the value ‘A’; 
    (c) Set the pointer cPtr1 to point to ch. 
    (d) Set cPtr2 to point to the same cell to which cPtr1 is pointing. 
    (e)  Write code to show that the two pointers are now pointing to the same variable.
    
    */

    char * cPtr1 = NULL;
    char * cPtr2 = NULL;

    char ch = 'A';

    cPtr1 = &ch;

    cPtr2 = cPtr1;

    printf("The address stored in cPtr1 is %p \n", &cPtr1);
    printf("The address stored in cPtr2 is %p \n", &cPtr2);

    printf("Value pointed to by cPtr1: %c\n", *cPtr1);
    printf("Value pointed to by cPtr2: %c\n", *cPtr2);

    

}