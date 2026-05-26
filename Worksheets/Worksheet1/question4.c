#include <stdio.h>

int main(void){
    /*
    Write a program that displays the ASCII code 
    of all the characters in tabular format.  
    */

    printf("Letter -> ASCII Code");


    // start from 0; go until 127; add 1 each time
    // should be unsigned, so it goes up to 256
    // better to use char, because you waste less bits
    for (int i=0; i <= 127; i++)
    {
        printf("%10d -> %5c\n", i, i);
    }


    // Teachers Code
    printf("ASCII Table\n");
    printf("Code\tCharacter\n");
    unsigned char ch;
    for(ch = 0; ch <= 255; ch++)
    {
        printf("%d %c\n", ch, ch); //%d = char displayed as digiti, %c = char displayed as character
        
        /*if (ch!=0) {
            
            if (ch%20==0) 
            {
                // pauses every 20 at a time
                printf("Press any key...");
                char c =  getchar();
            }
            
        // Like this there is an Error, it is not logical but it causes an Arithmetic Overflow - causing an infinite loop
        // Adding a +1 to 255, will make it go back to 0, instead of 256
        // 256 -> 100000000, 255 -> 11111111, therefor 256 doesn't fit in a character, making the 255 turn to 0
        }*/
        if (ch == 255)
        {
            break;
        } // to stop infinite loop
       
    }

    return 0;
    
}