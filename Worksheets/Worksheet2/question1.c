#include <stdio.h>

/*
Declare the following pointers 
(a)  iPtr pointer to integer 
(b)  cPtr pointer to character 
(c)  fPtr pointer to float 
(d) ipp pointer to pointer to integer
*/

int main(void) {


    int num = 50;
    int* iPtr = &num;

    char ch = 'A';
    char* cPtr = &ch;

    float num2 = 2.5;
    float* fPtr = &num2;

    int** ipp = &iPtr;

    printf("%d\n", num); // output: 50
    printf("%d\n", *iPtr); // output: 50
    printf("%d\n", **ipp); // output: 50



}