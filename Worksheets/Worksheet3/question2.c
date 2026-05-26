#include <stdio.h>
#include <string.h>

// Write a program to accept two words from the user.  
// The program should then display a message on 
// whether the words are the same or not. 

int main(void) {

    char wordOne[20];
    char wordTwo[20];

    printf("Enter a word: ");
    fgets(wordOne, sizeof(wordOne), stdin);

    printf("Enter another word: ");
    fgets(wordTwo, sizeof(wordTwo), stdin);

    if (strcmp(wordOne, wordTwo) == 0)
    {
        printf("The words are the same and the value returned by strcmp is %d\n", strcmp(wordOne, wordTwo));
    }else {
        printf("The words are NOT the same\n");
    }
}