

#include <stdio.h>

int main(void){

    //Write code to block the first 4 bits of an 8 bit pattern 
    short int input = 0b11101100;  //not all compilers support writing hard coded binary, if not use hex
    short int mask  = 0b11110000;

    short int result = input & mask;

    printf("The bitwise operation of 0x%X & 0x%X is 0x%X \n", input, mask, result);

    //**************************************************
    //Write code to set the first 4 bits of an 8-bit pattern

    mask = 0b00001111;
    result = input | mask;

    printf("The bitwise operation of 0x%X | 0x%X is 0x%X \n", input, mask, result);


    //Write code to invert the 6th bit of a letter of the alphabet

    input = (short int)'A'; // 01000001
    mask  = 0b00100000;

    result = input ^ mask;
    printf("The bitwise operation of 0x%X ^ 0x%X is 0x%X \n", input, mask, result);
    printf("The bitwise operation of %c ^ 0x%x is %c \n", input, mask, result);
    printf("The bitwise operation of %hd ^ %hd is %hd \n", input, mask, result);


    



}