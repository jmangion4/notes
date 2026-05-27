/*
    Write a program which encrypts a string and decrypts it to show the original data.
    Write code to display the cypher key using a suitable bitwise operator.
    The program must use a function encrypt() which accepts a character and returns the encrypted character.
    Create also a function decrypt() which accepts a character and returns the decrypted character
*/

#include <stdio.h>
#include <string.h>
#define CYPHER 0b00001000

// encrpyt() accepts an orignal character and returns the encrypted character.
unsigned char encrypt(unsigned char ch)
{
    return ch ^ CYPHER; // XOR operation to encrypt the character
}

// decrypt() accepts an encrypted character and returns the decrypted character.
unsigned char decrypt(unsigned char ch)
{
    return ch ^ CYPHER; // XOR operation to decrypt the character (same as encryption)
}

int main(void)
{
    unsigned char original = 'A';
    unsigned char encrypted = encrypt(original);
    unsigned char decrypted = decrypt(encrypted);

    printf("Original string: %c\n", original);
    printf("Encrypted: %c\n", encrypted);
    printf("Decrypted: %c\n\n", decrypted);

    // ---------------------------------------------------------------------------

    unsigned char strOriginal[100] = "Hello how are you?";
    unsigned char strEncrypted[100];
    unsigned char strDecrypted[100];

    for (int i = 0; i < strlen(strOriginal); i++)
    {
        strEncrypted[i] = encrypt(strOriginal[i]);
        strDecrypted[i] = decrypt(strEncrypted[i]);
    }

    strEncrypted[strlen(strOriginal)] = '\0';
    strDecrypted[strlen(strOriginal)] = '\0';

    printf("Original string: %s\n", strOriginal);
    printf("Encrypted string: %s\n", strEncrypted);
    printf("Decrypted string: %s\n", strDecrypted);

    return 0;
}