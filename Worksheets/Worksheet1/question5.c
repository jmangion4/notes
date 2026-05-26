#include <stdio.h>

int main(void) {
    /*
    Write a program that requests your height in cm and your name then displays the information in 
    the following format: 
    Helen, you are 1.65m tall. 
    */

    
    char name[50];
    printf("Enter your name: ");
    scanf("%49s", name);
    // limit input to avoid overflow

    unsigned short int height;
    printf("Enter your height in cm: ");
    int check = scanf("%hu", &height);
    
    
    if (check > 0) 
    // if check is greater than 0 = successful, run division
    {   
        float heightInMeters = (float)height / 100;
        printf("%s, you are %.2fm tall", name,heightInMeters);
                // you can do %.2fm (to round to 2 dp)
    }
    else {
        printf("Enter a valid Height in cm");
    }

    


}