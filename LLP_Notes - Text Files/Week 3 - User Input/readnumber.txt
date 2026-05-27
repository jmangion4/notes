#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");

    int num;

    // & is called the address operator
    // &num means the address of num
    // In scanf() we need to output the value through the parameter in ( )
    // Therefore we need to send the address of num otherwise the number input by the user will not be stored/output
    int check = scanf("%d", &num); // remember to use & to get the address of the variable num

    if (check > 0)
    {
        printf("Number: %d, Check: %d", num, check);
    }
    else
    {
        printf("Invalid input, Check: %d", check);
    }

    // Almost all format specifiers remove leading whitespaces. %c and fgets() don't.
    // Format specifiers read all digits up to a nondigit.
    // Any nondigits -> newline or other letters are left in buffer!

    /*
        INPUT           NUMBER          CHECK           COMMENTS
        12              12              1               All good, scanf was successful
            12          12              1               %d removes leading whitespace
          12  5         12              1               %d reads up to the first nondigit (space) and leaves the rest in the buffer
        12abc           12              1               abc will be left in buffer (problem! we need to flush)
        abc             ?               0               No number was read, check is 0, abc is left in buffer
        9876543210      ?               1               Overflow (Big Problem!)
    */

    // To avoid overflow, limit the number of digits read
    // int check = scanf("%8d", &num); // this will read up to 8 digits and ignore the rest, but it will not prevent overflow if the number is larger than the maximum value of int (2147483647)
}