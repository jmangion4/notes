#include <stdio.h>

int main(void)
{
    short int input = 0b11101100; // Not all compilers support binary literals, but we can use hexadecimal or octal literals
    short int mask = 0b11110000;  // Mask to extract the upper 4 bits

    short int result = input & mask; // Bitwise AND - &
    printf("The bitwise operation of 0x%X & 0x%X is: 0x%X\n", input, mask, result);
    // Output: The bitwise operation of 0xEC & 0xF0 is: 0xE0
    // Explanation: 0b11101100 & 0b11110000 = 0b11100000 (0xE0 in hexadecimal)

    //--------------------------------------------------------------------------
    // Write code to set the first 4 bits of and 8 bit pattern.

    // mask = ~mask;          // Invert the mask to set the first 4 bits
    //  This cause an issue because short int is 16 bits, meaning that the the other 0s in the mask will be set to 1, which will affect the result of the bitwise operation. To fix this, we can use a mask that only affects the first 4 bits, such as 0b00001111 or 0x0F.

    mask = 0b00001111;     // Mask to set the first 4 bits
    result = input | mask; // Bitwise OR - |

    printf("The bitwise operation of 0x%X | 0x%X is: 0x%X\n", input, mask, result);
    // Output: The bitwise operation of 0xEC | 0x0F is: 0xEF
    // Explanation: 0b11101100 | 0b00001111 = 0b11101111 (0xEF in hexadecimal)

    // Write the code to invert the 6th bit of a letter of the alphabet.

    input = (short int)'A'; // ASCII value of 'A' is 0x41 (0b01000001)
    mask = 0b00100000;      // Mask to invert the 6th bit (bit 5, counting from 0)

    result = input ^ mask; // Bitwise XOR - ^
    printf("The bitwise operation of 0x%X ^ 0x%X is: 0x%X\n", input, mask, result);
    // Output: The bitwise operation of 0x41 ^ 0x20 is: 0x61
    // Explanation: 0b01000001 ^ 0b00100000 = 0b01100001 (0x61 in hexadecimal)
}