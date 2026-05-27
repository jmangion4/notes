/*Write a program to ask the user for the name and display greeting msg
Enter name: Joe
Good morning, Joe! Have a nice day*/
#include <stdio.h>

int main(void){
    printf("Enter your name: ");

    //in c the string data type does nt exist
    //there are 2 ways to declare a string in C
    //as an array of char name[20] which has a fixed size (static
    //or as a pointer to char  char* name (see later) dynamic setting (size may change)
    char name[20]; 

    //how to use scanf() to get user inputer
    //scanf returns an integer code which can be > 0 meaning that the reading was successful,
    //  0 meaning that nothing was read and -1 meaning that an error occurred or the end of file was reached
    int check = scanf("%s", name); //%s is the format specifier for string (char array)
    //name is the variable that will hold the user input
    printf("Good morning, %s! Have a nice day", name);
    return 0;
    //Issues with scanf
    //1)scanf does not stop overflow automatically!! We need to limit the number of chars read by adding a number
    // %19s, but why not 20? because scanf adds a null character at the end of the string to indicate the end 
    //of the string, so we need to leave space for that null character

    //")Another issue is that %s only accepts ONE word - because %s read upto but not including the FIRST
    //whitespace character (space, tab, newline) so if the user enters "John Doe" only "John" will be stored
    // How do we sole this issue? use fgets() instead of scanf("%[^\n]", name) which reads until a newline 
    //character is encountered, allowing us to read multiple words
}