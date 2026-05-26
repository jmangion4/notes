#include <stdio.h>

int main(void) {

    /*
    Write a program to ask the user for a character.  
    The program should then display the ASCII 
    code for that character.  Here is sample run: 
    Please enter a character. 
    C 
    The code for C is 67. 
    */

    char ch;

    printf("Enter a letter: ");
    int check = scanf("%c",&ch); 
    // & is required to get the address of the variable so it can store the value
    // you don't use it unless its a string
    printf("The code for %c is %d\n", ch, ch);

}