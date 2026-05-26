#include <stdio.h>
#include <stdlib.h> // Malloc()
// gcc -Wall usingmalloc.c -o run

int main(void){
    
    // Allocate memory for one dynamic integer on heap, fill it up with data and display it

    /*
        Malloc() accepts the number of bytes to allocate on heap. Use sizeof() to get the size
        of the type of data to store, never use hardcoded values, as the size of the type might 
        change on different platforms.

        Malloc() returns a void pointer (void*), which we need to cast to our pointer.
        This pointer stores the address of the new block of memeory allocated on heap.
        IF there is not enough memory for this block of memory malloc() returns NULL.
        It is good programming practise to always check for NULL first before using the 
        returned pointer.    

    
    */


            // (int*)This is a cast - good to do
    int * p = (int*) malloc(1 * sizeof(int));
    // If you want one number no neeed to write '1 *'
    

    if(p != NULL)   // In C we write if(p) which means 'p is not null'
    {
        *p = 200;
        printf("The value is %d and the address is %p \n", *p, p);
        free(p); // Alwyas free once you are ready from your block
        p = NULL; // park your dangling pointer to null
    } else { // if(!p) this means 'if p is zero' (null)
        printf("Not enough memory");
    }

}