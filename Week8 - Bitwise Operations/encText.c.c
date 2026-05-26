/* 
Write a program which encrypts a string and decrypts it to show the original data.
Write code to dispay the cypher key using a suitable bitwise operator.
The program must use a function encrypt() which accepts a character and returns encrypted char
Create also a function decrypt() which accepts a character and returns teh decrypted char

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
    // Modify program so thatg it reads text from a text file and encrypts it
   
    unsigned char* strOriginal = (unsigned char*)malloc(1000 * sizeof(unsigned char));
    unsigned char* strEncrypted = (unsigned char*)malloc(1000 * sizeof(unsigned char));
    unsigned char* strDecrypted= (unsigned char*)malloc(1000 * sizeof(unsigned char));
    

    // open the file, and continue only if the file can be read
    FILE* fp = fopen("mytext.txt", "r");
    // Open file in text READ MODE. (use RB to read from Binary File)

    if(!fp)
    {
        printf("Error reading file.");
        //exit
    }
    else 
    {

        unsigned char ch;
        int i = 0;
        do {
            ch = fgetc(fp);
            if(ch!=EOF)
            {  //if current letter is not eof, put it in the original string at the current position
                strOriginal[i] = ch;
                strEncrypted[i] = encrypt(ch);
                i++; //move to next position
            }
        }while (ch != EOF && i <999);
        // limit the number of characters in string to avoid overflow
    
        short int length = strlen(strOriginal);
        for (int i=0; i < length; i++)
        {
            // get the current character in the original character, encrypt it
            // and store it it the encrytped string
            strEncrypted[i] = decrypt(strEncrypted[i]);

        }

        // Remember to attach a null char to the end of the encrypted string
        strEncrypted[length] = '\0';
        printf("Original string: %s\n Encrypted String: %s \n", strOriginal, strEncrypted);

        // Find the Cypher key
        printf("Cypher key: 0x%x ", strOriginal[0] ^ strEncrypted[0]);

    }
}