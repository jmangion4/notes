#include <stdio.h>

int main(void)
{
    char ch = 'A';
    short int sNum = 5;
    int iNum = 200;          // by default a whole number in C is INTEGER
    long int lNum = 122345L; // use letters to change the number to long, long long etc
    long long int llNum = 123456789LL;

    float fNum = 1.5f;
    double dNum = 1.234e02; // 1.234 x 10^2 = 123.4
    long double ldNum = 1.234e10L;

    printf("char: %c\n", ch);
    printf("short int: %hd\n", sNum);
    printf("int: %d\n", iNum);      //%d stands for decimal base 10
    printf("int(hex): %x\n", iNum); //%x stands for hexadecimal base 16
    printf("long int: %ld\n", lNum);
    printf("long long int: %lld\n", llNum);
    printf("float: %f\n", fNum);
    printf("double: %e\n", dNum);
    // printf("long double: %e\n", ldNum); //does the compiler support long double? correct specifier?

    // By default data types in C are signed, meaning they can represent both positive and negative values. If we want to declare an unsigned data type, we can use the unsigned keyword before the data type. Example:

    unsigned short int usNum = 10;
    signed short int ssNum = -14; // we can also use short int ssNum = -14; because by default it is signed

    // What is the size of each data type? use sizeof()

    printf("Size of char: %zu bytes\n", sizeof(char)); // or sizeof(ch)
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of float int: %zu bytes\n", sizeof(float));
    printf("Size of double int: %zu bytes\n", sizeof(double));
    printf("Size of long double int: %zu bytes\n", sizeof(long double));
    printf("Size of _Bool int: %zu bytes\n", sizeof(_Bool));
}