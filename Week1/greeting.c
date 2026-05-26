/* 
Write a program to ask the user for the name 
and display greeting msg
    
Enter Name: Joe
Good morning, Joe! Have a nice day.
    
*/

#include <stdio.h>

int main(void) {
    printf("Enter your name");
    
    // in C the string data type does not exist
    // there are two way to declare a string in C
    // 1. as an array of char --> char name[20] which has a fixed sized (static)
    // 2. or as a pointer to char (see later) dynamic string (size may change) --> char* name
    char name[20];

    // How to use Scanf() to get the user Input
    // scanf() --> returns an integer code
    // check and name are both outputs (meaning that something is stored inside of them)
    // The integer code can be (stored in check)
    // > 0 (more than 0) than the reading was successful (no errors)
    // 0 meaning nothing was read
    // -1 meaning reading EOF empty buffer
    // %s is called a format specifier and the letter changes according to DATA TYPE   
    // name is the variable which will store the string input
    int check = scanf("%19s", name);
    
    printf("Good Morning %s. Have a nice day!", name);
    return 0;
    // Issues with scanf
    // Scanf does not stop overflow automatically! 
    // We need to limit the number of chars read by adding a number '%19s'

    // Why 19 and not 20
    // A string in C always ends with the NULL character '\0' --> So the compiler 
    // knows where the string ends, 
    //we need to allow space for this null character when storing our string (THATS WHY 19 NOT 20)
    // Notice that %s only accepts ONE Word - because % reads upto but not including the FIRST Whitespace (space, tab or newline)
    
    // How do we solve this issue? (Using a space and all the inputs get outputted)
    // Use fgets() or use scanf("[^\n]", name) ->  \n Read up to new line but ^ dont include it
}
