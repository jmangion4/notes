#include <stdio.h>

int main(void) {

    char ch = 'A';
    short int sNum = 5;
    int iNum = 200; // by default a whole number in C is INTEGER
    long int lNum = 122345L; // USE Letter to change the number to long
    // sNum = 122345L --> Not Possible as it will Overflow (cause issues)
    // even sNum = num is bad, becuase int data type carries more bytes than short int
    long long llNum = 1232141241242LL;

    float fNum = 1.5f;
    double dNum = 1.1234e02; // 1.1234 x 10 to the power of 2
    long double ldNum = 1.1234;

    printf("The value of the Character is %c \n", ch);
    printf("The value of the Short Int is %hd \n", sNum);   
    printf("The value of the Int is %d \n", iNum); // %d stands for decimal base 10
    printf("The value of the Integer in hex is %x \n", iNum); // %x for haxadecimal
    printf("The value of the Long Int is %ld \n", lNum);        // %b for binary 
    printf("The value of the Long Long Int is %lld \n", llNum);

    printf("The value of the Float is %f \n", fNum );
    printf("The value of the Double is %e \n", dNum);
     printf("The value of the Long Double is %lf \n", ldNum);
    // does the compiler support long double? correct specifier?

    // BY default data types are signed, but you can force the compiler to set the data type
    // as unsigned by using the modifier Unsigned
    unsigned short int usNum = 10;
    signed short int ssNum = -14;
    // signed is EXTRA, all numbers are signed by defualt

    // What is the SIZE of EACH Type? sizeof()
    printf("The character has %zu byte\n", sizeof(char));
    printf("The short has %zu bytes\n", sizeof(short int));
    printf("The int has %zu bytes\n", sizeof(int));
    printf("The Long Int has %zu bytes\n", sizeof(long int));
    printf("The Long Long Int has %zu bytes\n", sizeof(long long int));
    printf("The Float has %zu bytes\n", sizeof(float));
    printf("The Double has %zu bytes\n", sizeof(double));
    printf("The Long Double has %zu bytes\n", sizeof(long double));
    printf("The _Bool has %zu bytes\n", sizeof(_Bool));

    // _Bool stores 1 and 0 NOT True or False (Syntax changes)


}