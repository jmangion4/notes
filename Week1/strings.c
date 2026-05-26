#include <stdio.h>
#include <string.h>

int main(void) {
    
    char str[20];

    // str = "Good Morning"; --> WRONG
    strcpy(str, "Good Morning");
    // always use strcpy to copy to string

    for (int i=0; i < 20; i++)
    {
        char ch = str[i];
        // it will check the values after the 
        //Good Morning and if there is a 0 it will output a #
        if ( (int)ch == 0)
        {
            printf('# ');
        }else{
            
            printf("%c ", str[i]);
            // displaying each single character
            // (going through the array)
        }
    }


    return 0;
}