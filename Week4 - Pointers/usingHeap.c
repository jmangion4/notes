#include <stdio.h>
#include <time.h>
#include <stdlib.h> // for Malloc + Random
#define MAX 100000 // CONSTANT
// #define MAX 1000 - THIS would work

int main(void) {

    // int* -> Pointer to int
    // (int*) -> cast
    // malloc(?) -> Needs how much size it needs so we use sizeof()

    int* bigList =  (int*) malloc(MAX * sizeof(int));
    // MAX * sizeof(int) computes the total number of bytes needed.
    // malloc - adress of first location inisde HEAP
    // Pointers - Variables that store Address - bigList 
    // BigList --> Holds the STARTING Address of an Array of MAX Integers in heap memory
    
    if(bigList)
    // if bigList is not NULL, meaning Malloc worked
    // meaning malloc has enough space to give me the sizeof(int) 
    {

        /*
        srand(time(NULL)); ensures a new sequence every run.
        rand() generates one number at a time.
        
        */
        srand(time(NULL));
        // To generate DIFFERENT random data after each run
        // Values range between 0 and RAND_MAX 32767 (depnding on system)
        // Everytime you run the program at a different second, a different number is generated
        
        // stores random number in the ith position of the array
        for (int i=0; i < MAX; i++)
        {
            bigList[i] = (int)rand();
            printf("%d\t", bigList[i]);
        }
        free(bigList);
        // YOU HAVE TO FREE AFTER MALLOC
    }



}