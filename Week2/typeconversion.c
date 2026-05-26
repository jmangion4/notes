#include <stdio.h>
#include <limits.h> 
/*
    In an assignment you have to be careful when the data type on the RHS is LARGER
    than that on the LHS. 
    In this example we are trying to store an INT (4 bytes) into
    smaller type SHORT INT (2 types)
    C Will NOT stop you because it Trusts you. But you need to be careful because there
    might be SILENT arithemtic overflow issues.
    If the value in the RHS Variable is small enough to fit, than overflow does not occur
    However, if the value in the RHS variable is larger than the largest value that can fit (SHRT_MAX)
    then arithmetic overflow will occur. You will end up with the wrong value in the receiving variable
    because only the bits in the first two types will be copied.

    IN C It is extrempley important to VALIDATE the value before stroing a LARGE valuse into a smaller container
*/
int main(void){
    short int sNum;
    int iNum = 124538;
    sNum = iNum;

    if (iNum <= SHRT_MAX){
        
        sNum = iNum;
        printf("Int: %d \n", iNum);
        printf("Short: %hd \n", sNum);
        
        // for gcc compiler version 15 or later, you can use %b to display binary
        /*
        printf("Int: %d \nBinary: %016b", iNum, iNum);
        printf("Short: %hd \nBinary: %032b\n", sNum, sNum);
        (It does not work for me)
        */
    }
    else {
        print("Value is too Large");
    }

   
    
}