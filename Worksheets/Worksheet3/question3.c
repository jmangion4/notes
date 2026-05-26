#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Write a program to learn how to validate user input using atoi() function.   
- The program should prompt the user to enter an age.   
- The data input should be checked to see if it is an integer with a value between 1 and 100.   
- If the value is not valid the user should be prompted to enter the age again.   
- The process continues until a valid age is input. 
*/

int main(void)
{
    char input[10];
    int age = 0;
    int valid = 0;

    // while valid is not true 
    while (!valid) 
    {
        printf("Enter your age (1-100): ");

        // Get user input as a string
        if (fgets(input, sizeof(input),stdin) == NULL) 
        {
            printf("Error reading input. Please try again.\n");
            continue;
        }

        // Check if input is empty
        if (strlen(input) == 0) {
            printf("Invalid input. Please enter a number.\n\n");
            continue;
        }

        // Convert string to integer using atoi()
        age = atoi(input);
        // How atoi() works
        // atoi("25") -> Reutrns 25
        // atoi("ABC") -> Returns 0
        // atoi("21abc") -> returns 25 (converts leading numbers, ignores rest)

        // Validate the age
        if (age >= 1 && age <= 100) {
            valid = 1;
            printf("Valid age entered: %d\n", age);
        } else {
            printf("Invalid input. Age must be between 1 and 100.\n\n");
        }

    }
    return 0;
}