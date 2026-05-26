#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5
// wherever you see MAX convert to 5
#define LEN 10

int main(void)
{
    /*
        Remember that there are two ways how to declare strings
        - as an array of char -> This creates a string of fixed size on stack
        - as a pointer to char -> this allows you to handle a dynamic string on heap
        Once the string is declared you can use any string handling function
        Remember that in C, for a string to be valid, it must end with '\0' null char

    */    

    char wordOne[10]; // static array
    char* wordTwo; // Dynamic but not linked to memory yet

    wordTwo = (char*)malloc(10*sizeof(char)); // dynamic string of 10 characters

    strcpy(wordTwo, "hello");
    printf("%s \n", wordTwo);

    // How to handle a set of words?
    // Method 1 - an array of fixed size strings
    // --> An array of (an array of char) 
    // A static collection of static strings (fixed size) can be declared in a 2D array of char

    // TO declare an array of 5 words of max 10 characters each
    char words[5][10] = {"apple", "fig", "banana", "orange"};
    for (int i = 0; i<5; i++)
    {
        printf("%s ", words[i]);
    }

    // Method 2 - A dynamic list of dynamic strings
    // Remember that the list pointer will point to a pointer to char(string)
    char** wordList = (char**)malloc(MAX * sizeof(char*));
    // IMP we use sizeof(char*) because we are storing a pointer to char in each cell

    // EXTREMLY IMPORTANT
    // YOu still need to allocate memory for each internal pointer
    // before being able to store a string in each location
    // Each pointer att he moment is a wild pointer DANGEROUS

    for (int i = 0; i<MAX; i++)
    {
        wordList[i] = (char*) malloc(LEN * sizeof(char));
        // allocate memory to each pointer in the list, for LEN characters
    }

    // shows the pointer addresses
    for (int i = 0; i < MAX; i++)
    {
        printf("\nPointer address at location %d is &p \n", i, wordList[i]);
    }

    // copy the data from the other array and store it in the dynamic list
    for(int i = 0; i <MAX; i++)
    {
        strcpy(wordList[i],words[i]);
    }

    for (int i = 0; i <MAX; i++)
    {
        printf("%s ", wordList[i]);
    }
}