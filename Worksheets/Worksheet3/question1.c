#include <stdio.h>
#include <string.h>

/*
Write a program to learn how to handle strings by following these instructions:
 - Use array implementation to declare a string of 10 characters.   #
 - Ask the user to enter a word in your string and make sure that no overflow occurs.   
 - Display the length in the word. 
 - Display the string in reverse order 
 - Search for  a particular letter in the word and display a message if it is found or not

*/

int main(void){

    // Declare string of 10 char
    char wordOne[10];

    // Gets user input
    printf("Enter a word: ");
    fgets(wordOne, sizeof(wordOne), stdin);

    int length;

    // strlen -> Includes the \n that fgets() adds.
    // therefor the lenght will be off by one, unless we remove it
    length = strlen(wordOne);

    if (wordOne[length - 1] == '\n')
    {
        wordOne[length - 1] = '\0';
        length--;
    }

    printf("\nLength of the word: %d\n", length);

    // Display the string in reverse order 
    printf("Word in reverse: ");
    for (int i = length - 1; i >= 0; i--) 
    {
        printf("%c", wordOne[i]);
    }


    // Search for particular letter
    char searchLetter;
    int found = 0;

    printf("\nEnter a letter to search In the word you inputted: ");
    scanf("%c", &searchLetter );

    for (int i = 0; i <length; i++)
    {
        if (wordOne[i] == searchLetter)
        {
            found = 1;
            break;
        }
    }

    if (found) // found = 1
    {
        printf("The letter '%c' was found\n", searchLetter);
    } else {
        printf("The letter '%c' was not found\n", searchLetter);
    }

    return 0;

}   