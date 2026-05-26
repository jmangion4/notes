/* 
Write a program which encrypts a string and decrypts it to show the original data.
Write code to dispay the cypher key using a suitable bitwise operator.
The program must use a function encrypt() which accepts a character and returns encrypted char
Create also a function decrypt() which accepts a character and returns teh decrypted char

*/

#include <stdio.h>
#include <string.h>
#define CYPHER 0b00001000 // the mask will invert the 4th bit of the input letter 

// encrypt accepts an original character and returns the encrypted char
unsigned char encrypt(unsigned char ch)
{
    return ch^CYPHER;
}

// decrypt accepts an encrypted character and returns the original
unsigned char decrypt(unsigned char ch)
{
    return ch^CYPHER;
}


int main(void)
{
    unsigned char original = 'A';
    unsigned char encrypted = encrypt(original);
    unsigned char decrypted = decrypt(original);

    printf("Original: %c Encrypted: %c Decrypted: %c \n ", original, encrypted, decrypted );

    // array
    char strOriginal[100] = "Hello how are you?";
    unsigned char strEncrypted[100];
    unsigned char strDecrypted[100];

    short int length = strlen(strOriginal);
    for (int i=0; i < length; i++)
    {
        // get the current character in the original character, encrypt it
        // and store it it the encrytped string
        strEncrypted[i] = encrypt(strOriginal[i]);

    }
    // Remember to attach a null char to the end of the encrypted string
    strEncrypted[length] = '\0';
    printf("Original string: %s\n Encrypted String: %s \n", strOriginal, strEncrypted);

    // Find the Cypher key
    printf("Cypher key: 0x%x ", strOriginal[0] ^ strEncrypted[0]);
}