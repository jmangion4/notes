#include <stdio.h>
#include <string.h>

int main(void) {
    char str[20];
    //str = "Good Morning"; 
    //this will not work because str is an array and we cannot assign a new value to an array after it has been declared 
    //we need to use the strcpy() function from the string.h library to copy the string "Good Morning" into the str array
    strcpy(str, "Good Morning");

    for (int i = 0; i < 20; i++) 
    { 
        char ch = str[i];
        if ((int)ch == 0) { printf("#"); }
        else { printf("%c ", str[i]); }
    } 
    return 0;
}