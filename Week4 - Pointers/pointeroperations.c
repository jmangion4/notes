#include <stdio.h>

int main(void) {

    int num = 50;

    int* p = &num;


    //Declare a new pointer q and assign it to p
    int* q;
    q = p; //copies the address stored in p into q
    //this means that q is not pointing to the same cell to which p is pointing

    printf("The address stored in p is %p \n", p);
    printf("The address stored in q is %p \n", q);

    printf("The data stored in the cell to which p is pointing is %d \n", *p);
    printf("The data stored in the cell to which q is pointing is %d \n", *q);

    //We can use the comparispon operator == to check if two pointers have the same address
    //this means we are checking if the pointers are pointing to the same cell
    if(p==q){
        printf("The pointers are pointing to the same cell\n");
    } else {
        printf("The pointers are NOT pointing to the same cell\n");
    }

    //this code will check if the data in each cell to which the pointer is pointing is the same
    // IMP this is not a good test to check if the pointers are pointing to same cell!
    if(*p == *q){
        printf("The Data in the cells is the same\n");
    } else {
        printf("The Data in the cells is NOT the same\n");
    }

    //'what happens when you increment a pointer
    // MAGIC!!! 
    // The compiler will decide how much the pointer will be incremented according to its type
    // An integer pointer will be incremented by 4 bytes.
    // This is done automatically so that the programmer does not need to worry about
    // where the next adjacent free memory location is.
    printf("The address stored in integer pointer p is %p\n ", p);
    p++;    //this means p = p+1; 
    printf("The address stored in integer pointer p is NOW %p\n ", p);
    // 1st Output: 0061FF10
    // 2nd Output (after incrmeent): 0061FF14

    //do the same with a char pointer
    char ch = 'A';
    char* cPtr = &ch;
    printf("The address stored in char pointer cPtr is %p\n ", cPtr);
    cPtr++;
    printf("The address stored in char pointer cPtr is NOW %p\n ", cPtr);

}