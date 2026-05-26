#include <stdio.h>
int main(void)
{

    /*Write a program to accept a VALID integer from the user.  If the data entered by the user is 
    correct a thank you message is displayed.  Otherwise, a suitable error message is displayed and 
    the user is asked to reenter the number.  The program stops only when a valid number is 
    entered.  Your program should not allow characters other than numbers to be entered.  No 
    overflow should occur. 
    Use this code to flush the keyboard buffer after non-numeric data is entered: 
    int c; 
    while ((c = getchar()) != '\n' && c != EOF) 
    {}*/

    int num = 0;
    int x = 0;
    char c;
    do
    { 
        printf("Enter a number: \n");
        x = scanf("%d", &num);
        printf("The return value of scanf is: %d\n", x);
        if (x > 0) // at least 1 item matched, input successful
        {
            printf("The number is %d\n", num);
        }
        else if (x == 0) //no item matched, user entered non numeric data
        {
            printf("You entered incorrect data. \n");
            printf("Emptying buffer ... \n");
            while ((c = getchar()) != '\n' && c != EOF) {
            } 
            //get all chars from buffer until newline or EOF is read
            //Emptying the buffer -> If we don't it will cause an infinite loop
            // Because not emptying the buffer will cause for the buffer to store invalid data.
            // this would mean that scanf would not accept anymore data when asking the user, causing a loop

        }
    } while (x <= 0); // no item matched, loop again
    // as long as input is wrong, keep on asking (as long as check is 0 (False))

    printf("goodbye...");
}