#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int num;
    int valid;
    char c;

    do {
        printf("Enter a number: ");
        valid = scanf("%d", &num);


        if(valid) // If check is GREATER > Than 0
        {
            printf("It is a valid number\n");
        }
        else {
            printf("It is not a valid number\n");
            // CLEAR INPUT BUFFER
            // fflush(stdin);
            // OR
            while ((c = getchar()) != '\n' && c != EOF)
            { }
        }
        
    } while (!valid);

    // to generate random number
    srand(time(NULL));

    int num = rand()%100 ; // 0 to 99
        // add a +1 for it to be to 100

    
}