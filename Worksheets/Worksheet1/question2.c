#include <stdio.h>

int main(void) {
    /*
    Write a program to display the number 100 in decimal, octal and hexadecimal.   Display the 
    following output: 
    Dec = 100; octal = 144; hex = 64 
    Dec = 100; octal = 0144; hex = 0x64
    */
    
    int num = 100;
    
    printf("Dec = %d; octal = %o; hex = %x\n ", num, num, num );
    printf("Dec = %d; octal = %04o; hex = 0x%x ", num, num, num );
    // adding a 04 after the percentage, will turn the number to 4 digits (padding)

}