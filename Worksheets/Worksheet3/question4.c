#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /*
    Write a program to test dynamic strings by following these instructions: 
    - Use pointer implementation to declare a dynamic string called memo which can store up to 10 
    characters.  
    - Fill up the string with data and display it.   
    - Allocate more memory to your string variable so that it can store up to 20 characters.   
    - Fill up the string with new data and display it. 
    
    */

    char *memo = NULL;

    // Step 1: Allocate initial memory for 10 characters
    memo = (char *)malloc(10 * sizeof(char));
    
    // Step 2: Fill up the string with data and display it
    strcpy(memo, "Hello");
    printf("String (10 chars max): %s\n", memo);

    // Step 3: Allocate more memory to store up to 20 characters
    memo = (char *)realloc(memo, 20 * sizeof(char));

    // Step 4: Fill up string with new data and display it
    strcpy(memo, "Dynamic Memory");
    printf("Updated String (20 chars max): %s\n", memo);

        // Free the allocated memory
    free(memo);
    memo = NULL;

    printf("Memory freed\n");

    return 0;
}
