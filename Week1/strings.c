#include <stdio.h>
#include <string.h>

int main(void){
    
    char str[20];
    //str = "Good morning"; this is not allowed because it's an array
    strcpy(str, "Good morning") ; //always use strcopy to copy to string

    for (int i=0; i<20; i++){
        char ch = str[i];
        if ((int)ch == 0){
            printf("# ");
        } else {
            printf("%c ", str[i]); 
        }
    }
}
