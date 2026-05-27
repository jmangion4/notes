/*
Write a program to ask the user for the name and display greeting message.
Enter name: Max
Good Morning, Max! Have a nice day!
*/

#include <stdio.h>

int main(void) {
    printf("Enter name: ");

    //in c the string data type does not exist
    //there are two ways to declare a string in c
    //as an array of char, char name[20] which has a fixed size (static)
    //or as a pointer to char, char *name which can change in size (dynamic)
    char name[20];

    //how to use scanf() to get user input

    //scanf() returns an integer code which can be > 0 meaning that the reading was successful
    //0 = nothing was read
    //-1 = end of file was reached, reading EOF empty buffer
    // %s is called a format specifier and the letter changes according to type
    //name is the variable which will store the input
    
    int check = scanf("%19s", name);

    printf("Good Morning, %s! Have a nice day!", name);

    return 0;

    //Issues with scanf()
    //1. Scanf foes not stop overflow automatically! We need to limit the number of chars read by adding a number "%19s"
    //Why 19 and not 20?
    //A string in c always ends with the null character '\0' which is used to indicate the end of the string. So we need to reserve one character for the null terminator, hence we can only read 19 characters into the name array of size 20.

    //2. Notice that %s only accepts one word
    //This is because %s reads upto but not including the first whitespace character (space, tab, newline). So if the user enters "Max Smith", only "Max" will be stored in the name variable and "Smith" will be left in the input buffer. 
    //To read a full line of input including spaces, we can use fgets() or scanf("%[^\n]", name).
}