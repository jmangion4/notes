#include <stdio.h>
#include <string.h>

int main(void)
{
    char wordOne[20] = "Cat";
    char wordTwo[20] = "Cat";

    /*
    Remember that the name of any array is the address of the first element.
    Here we are not comparing the data in the 'strings' but the addresses of the first elements of the arrays. Since wordOne and wordTwo are two different arrays, they will have different addresses, and thus the comparison will indicate that they are different, even though the contents of the strings are the same.
    */

    // Comparing addresses of the first elements of the arrays
    wordOne == wordTwo ? printf("The strings are the same.\n") : printf("The strings are different.\n");

    // Comparing only the first characters of the strings
    *wordOne == *wordTwo ? printf("The strings are the same.\n") : printf("The strings are different.\n");

    // Comparing the contents of the strings using string functions
    // To compare the contents of the strings, we can use the strcmp function from the string.h library. This function compares two strings and returns 0 if they are equal, a negative value if the first string is less than the second string, and a positive value if the first string is greater than the second string.
    // A string being less or greater than another means that the first character that differs between the two strings has a lower or higher ASCII value, respectively. For example, "Cat" is less than "Dog" because 'C' has a lower ASCII value than 'D'.
    strcmp(wordOne, wordTwo) == 0 ? printf("The strings are the same.\n") : printf("The strings are different.\n");

    // Notice that the value of a string cannot be changed using the assignment operator (=).
    // wordOne = "Dog"; // This would cause a compilation error

    // strings are immutable in C, meaning that once a string is created, its contents cannot be changed. The assignment operator (=) cannot be used to change the value of a string after it has been initialized.

    // To change the value of a string, you can use functions like strcpy from the string.h library to copy a new string into an existing string variable.
    strcpy(wordOne, "House"); // This will copy the string "House" into the variable wordOne, replacing the previous value "Cat".
    // Note that the destination string (wordOne) must have enough space to hold the new string, including the null terminator. In this case, wordOne has a size of 20 characters, which is sufficient to hold the string "House" and its null terminator.

    // Another important function is strlen, which returns the length of a string (not including the null terminator).
    printf("The length of wordOne is: %lu\n", strlen(wordOne)); // Output: 5
}