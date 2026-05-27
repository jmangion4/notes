#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

int main(void)
{
    /*
        Remember that there are 2 ways to create a string in C:

        1. Using an array of characters (char array) - This creates a string that is stored on the stack. The size of the array must be known at compile time, and it cannot be resized during runtime.
        2. Using a pointer to a string literal - This creates a string that is stored in read-only memory. The string literal is immutable, meaning it cannot be modified after it is created. Allows you to handle a dynamic string on heap.

        What is a string literal? A string literal is a sequence of characters enclosed in double quotes (e.g., "Hello, World!"). When you use a string literal in your code, the compiler creates a null-terminated array of characters in memory to hold the string. The string literal is stored in a read-only section of memory, and it cannot be modified during runtime.

        Once the string is declared you can use any string handling functions from the string.h library to manipulate the string. For example, you can use the strlen() function to get the length of the string, or the strcpy() function to copy one string to another.
        Remember that when using dynamic memory allocation for strings, you need to allocate enough memory to hold the string plus the null terminator. For example, if you want to store a string of 9 characters, you need to allocate 10 bytes of memory (9 for the characters and 1 for the null terminator).
    */

    char wordOne[10]; // static array of characters, can hold up to 9 characters plus the null terminator
    char *wordTwo;    // dynamic but not yet allocated pointer to a string

    wordTwo = (char *)malloc(10 * sizeof(char)); // allocate memory for 10 characters (9 + null terminator) on the heap

    strcpy(wordTwo, "Hello"); // copy the string "Hello" into wordTwo
    printf("%s \n", wordTwo); // Output: Hello

    // How do we handle a set of words?
    // Method 1 - An array of fixed size strings --> an array of arrays of characters (2D array)
    // A static collection of static strings (fixed size) can be declared in a 2D array of char

    // To declare an array of 5 words of max 10 characters each (including the null terminator)
    char words[5][10] = {"apple", "pear", "fig", "banana", "orange"};

    for (int i = 0; i < 5; i++)
    {
        printf("%s \n", words[i]); // Output: apple, pear, fig, banana, orange
    }

    // Method 2 - A dynamic list of dynamic strings --> an array of pointers to strings (array of char pointers)
    // Remember that the list pointer will pointer will point to a pointer to char (string)

    char **wordList = (char **)malloc(MAX * sizeof(char *)); // allocate memory for 5 pointers to char (5 strings)

    // IMPORTANT: we use sizeof(char *) because we are allocating memory for pointers to char, not for characters themselves. Each element of wordList is a pointer to a string, so we need to allocate memory for the pointers first.

    // EXTREMELY IMPORTANT: we need to allocate memory for each string in the list, not just for the list of pointers. This is a common mistake that can lead to undefined behavior if we try to access or modify the strings without allocating memory for them. Right now, each pointer is a WILD POINTER, meaning it points to an undefined location in memory.

    for (int i = 0; i < MAX; i++)
    {
        wordList[i] = (char *)malloc(20 * sizeof(char)); // allocate memory for each string (20 characters)
    }

    // Show the pointer addresses
    for (int i = 0; i < MAX; i++)
    {
        printf("Address of wordList[%d]: %p \n", i, (void *)wordList[i]); // Output: the memory addresses of each string
        // (void *) is used to cast the pointer to void* for printing, which is a common practice when printing pointer addresses in C. Without it, the output may not be formatted correctly, and it can lead to warnings or errors from the compiler.
    }

    // Copy the data from the other array and store it in the dynamic list
    for (int i = 0; i < MAX; i++)
    {
        strcpy(wordList[i], words[i]);
    }

    // Show the contents of the dynamic list
    for (int i = 0; i < MAX; i++)
    {
        printf("wordList[%d]: %s \n", i, wordList[i]);
    }

    // Free the allocated memory
    for (int i = 0; i < MAX; i++)
    {
        free(wordList[i]);
    }
    free(wordList);
}