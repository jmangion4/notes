#include <stdio.h>

int main(void) {

    printf("Enter a number: ");
    int num;
    int check = scanf("%d", &num);
    // & is called the address operator
    // &num means the address of num

    // in scanf we need to output the value through the parameter in ( )
    // therefor we need to send the address of num
    // otherwise the number input by the user will NOT be output

    if(check) 
    // if scanf returns a value greater than 0 
    // - which means it was successful once (TRUE)
    {
        printf("Number: %d  Check: %d \n", num, check);
    } else {

        printf("Incorrect Input. Check: %d\n");
    }

    /*
    INPUT       NUMBER      CHECK       COMMENTS
    12              12          1       all good, scanf was successful
        12        12            1       %d removes leading whitespaces which is good
      12  5       12            1       %d reads up to the first non digit (so space and 5 are left )
    12abc           12          1       abc will be left in bugger (problem we need to flush)
    abc             ?           0       string left in buffer
    9876534567890   ?           0       BIG PROBLEM overflow

    To avoid overflow, when reading scanf, limit the number of digits read
    int check = scanf("%d", &num);
    this will only get the first 8 digitis from the input

    
    */

}