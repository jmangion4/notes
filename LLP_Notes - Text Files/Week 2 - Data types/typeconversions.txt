#include <stdio.h>
#include <limits.h>

/*
In an assignment statement you have to be careful when the data type on the RHS is LARGER than that on the LHS. In this example we are trying to store and INT (4 bytes) into a smaller type SHORT INT(2 bytes).

C will not stop you because it trusts you. But you need to be careful because there might be SILENT arithmetic overflow issues.
If the value in the RHS variable is small enough to fit, then overflow does not occur! However, if the value in the RHS variable is larger than the largest value that can fit (SHRT_MAX) the overflow will occur. You will end up with the woring value in the recieving variable because only the bits in the first two bytes will be copied.

//In c it is extremely important to validate the value before storing a LARGE value into a smaller container
*/

int main(void)
{
    short int sNum;
    int iNum = 32768; // SHRT_MAX+1

    if (iNum <= SHRT_MAX)
    {
        sNum = iNum;
        printf("Int: %d\n", iNum);
        printf("Short: %hd\n", sNum);
    }
    else
    {
        printf("Value is too large");
    }

    // for gcc compiler version 15 or later, you can use %b to display binary.
    // printf("Int: %d\nBinary: %032b\n\n", iNum, iNum);
    // printf("Short: %hd\nBinary: %016b\n", sNum, sNum);
}
