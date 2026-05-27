#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

int main(void)
{
    char **wordList = (char *)malloc(MAX * sizeof(char *)); // allocate memory for 5 pointers to char (5 strings)

    // Get the words from the user and store them in the list
    for (int i = 0; i < MAX; i++)
    {
        char buffer[20];                                           // temporary buffer to hold the input string
        prinf("Enter a word: ");                                   // prompt the user to enter a word
        scanf("%19s", buffer);                                     // read string from user, limit to 19 to avoid overflow
        int length = strlen(buffer);                               // get the length of the input string
        wordList[i] = (char *)malloc((length + 1) * sizeof(char)); // allocate memory for the string, +1 for the null terminator
        strcpy(wordList[i], buffer);                               // copy the input string to the allocated memory
    }

    // Display
    printf("The words you entered are:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%s\t", wordList[i]); // Output: the words entered by the user
    }

    // Ask the user to delete a word
    int pos = 0;
    printf("\nEnter the index of the word to delete (0-%d): ", MAX - 1);
    int check = scanf("%d", &pos);
    if (pos >= 0 && pos <= (MAX - 1))
    {
        free(wordList[pos]);  // free the memory allocated for the word at the specified position
        wordList[pos] = NULL; // set the pointer to NULL after freeing the memory to avoid dangling pointers
    }
    else
    {
        printf("Invalid position entered.\n");
    }

    // Since pointers can now be NULL, we need to ALWAYS check for that before using the pointer to avoid undefined behavior
    for (int i = 0; i < MAX; i++)
    {
        if (wordList[i]) // check if not null
        {
            printf("%s\t", wordList[i]); // Output: the words entered by the user, except the deleted one
        }
    }

    // Even when freeing, you have to be careful
    for (int i = 0; i < MAX; i++)
    {
        if (wordList[i])
        {                       // check if not null before freeing
            free(wordList[i]);  // free the memory allocated for each word
            wordList[i] = NULL; // set the pointer to NULL after freeing the memory to avoid dangling pointers
        }
    }

    free(wordList);  // free the memory allocated for the list of pointers
    wordList = NULL; // set the pointer to NULL after freeing the memory to avoid dangling pointers
}