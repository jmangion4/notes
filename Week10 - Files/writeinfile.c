#include <stdio.h>
 
 
int main(void){
 
    FILE* fp = fopen("mytext.txt", "a");
    if (!fp){
        printf("Error using file..");
        return -1;
    } else {
        fprintf(fp, "Good morning, have a nice day\n");
 
        int num = 10;
        fprintf(fp, "The value of the number is %d \n", num);
 
        fputs("Hello from fputs\n", fp);
        fclose(fp);
        return 0;
    }
}