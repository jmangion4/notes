#include <stdio.h>
// Uninitialized Pointer (Dangerous)

// SIZE OF POINTER BELOW

int main(void){

    /*
     This program we are dereferencing an uninitialised pointer.
     This is dangerous code, because the pointer will have an arbitrary address.
     This could be a memory cell which is protected by the OS, or even a variable in your
     own program.

     We say that the program has UNDEFINED BEHAVIOUR.
     It might appear to be working, but other times a segmentation fault error might be thrown by the OS. 
     The fact that it is compiling and running does not mean all is good - silent failure - 
     the output does not show that something is wrong.
     It is good programming practice to always compile with -Wall option so that the compiler warns you.
    */
  
    //BAD pointers 
    int* iPtr; 
    // Declares pointer to an integer but NOT Initialized
    // Value ir random/undefined -> Point anywhere in Memory (DANGEROUS)


    //What happens if you try to use the pointer ?
   // *iPtr = 123; //changing the value of a random memory cell
  
    printf("The address stored in iPtr is %p \n", iPtr);
 //  printf("The data stored in the mem cell to which the pointer is pointing is %d \n", *iPtr);

    /* 
        Good programming practice when using pointers
        If you have a pointer but you are not using it yet, set it to NULL.
        NULL is macro that means 0.  Address 0 is a 'safe' location where to park your pointers.
        It is a common convention that address 0 on all systems is readonly, and if you try to dereference this location
        no harm will be done.
        When you have a function that returns a pointer you should ALWAYS check for NULL first before using it.

    */
    int * p;
    p = NULL; //park your pointer

    if(p==NULL){  //  if(!p)
        printf("You cannot use the pointer");
    } else if(p!=NULL) { // if(p)
        printf("You can use the pointer");
    }

    //What is the size of a pointer?
    
    printf("The size of an integer pointer is %zu bytes \n", sizeof(iPtr));
    char* cPtr = NULL;
    long long int* llPtr = NULL;
    printf("The size of a char pointer is %zu bytes \n", sizeof(cPtr));
    printf("The size of an long long pointer is %zu bytes \n", sizeof(llPtr));
    //The size of a pointer depends on the compiler and target architecture - 
    // a 32-bit system gives a pointer size of 4 bytes which limits the max address to about 4GB
    // a 64-bit systems gives a pointer size of 8 bytes

    /*
    
    Pointer size (the number of bytes used to store a pointer variable) depends 
    on the system’s architecture, not on the data type pointed to.
    
    */
}
    

   


