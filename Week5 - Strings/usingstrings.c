#include <stdio.h>
#include <string.h>

int main(void) {
    char wordOne[20] = "cat";
    char wordTwo[20] = "cat";


    /*
        Remember that the name of ANY array is the address of the first location
        Here we are not comparing the data in the 'strings'. We are comparing
        the addresses of where the strings are stored. These addresses will NEVER be
        the same, so we will always get the output -> The words are not the same.
    
    */
    if (wordOne == wordTwo)
    {
        printf("The words are the same\n");
    }else {
        printf("The words are NOT the same\n");
    }

    // Comparing the first letter ONLY - WRONG
    if (*wordOne == *wordTwo)
    {
        printf("The words are the same\n");
    }else {
        printf("The words are NOT the same\n");
    }

    // Solution 
    // - Either compare each letter one by one yourself, 
    // - or else we use string.h functions (you need to #include <string.h>)

    // We need to use strcmp() to compare strings 
    // strcmp() accepts two strings and returns an integer. 
    // If they are the SAME it returns a 0
    // It returns a positive number > 0 (more than) if the first is alphabetically larger than the second   cat   dog
    // it returns a negative number < 0 if the first is alphabetically smaller than the second              zebra   mouse
    if (strcmp(wordOne, wordTwo) == 0)
    {
        printf("The words are the same and the value returned by strcmp is %d\n", strcmp(wordOne, wordTwo));
    }else {
        printf("The words are NOT the same\n");
    }

    // Did you notice that the value of a string cannot be changed?
    // strings are immutable meaning that the value of a string cannot be changed with a = assignment
    
    // use strcpy()
    strcpy(wordOne , "Hello");
    
    // Another important function is strlen()
    // Get the LENGTH of a STRING
   printf("The length of the string %s is %d \n", wordOne, strlen(wordOne));
    
    
}