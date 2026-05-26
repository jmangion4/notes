#include <stdio.h>
 
 
//Write a function that accepts a filename for a text file, and the text to append to that file
//The function must return 1 if successful or 0 if unsuccessful
int writeMessage(char* filename, char* msg){
    FILE* fp = fopen(filename, "a");
    if(!fp){
        return 0;
    } else {
        fprintf(fp, msg);
        fclose(fp);
        return 1;
    }
 
}
 
 
 
int main(void){
 
 
    int check = writeMessage("myfile.txt", "HEllo how are you");
    if (!check){
        printf("Error using file");
    } else {
        printf("Data written to file");
    }
 
}
 