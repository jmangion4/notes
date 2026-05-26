#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5


int main(void){

char** wordList = (char**)malloc (MAX * sizeof(char*));  

//get the words from the user, and allocate memory and store in the list
for(int i=0; i< MAX; i++){

    char buffer[20];
    printf("Enter a word: ");
    scanf("%19s", buffer); //get data from user
    int length = strlen(buffer);
    wordList[i] = (char*) malloc((length+1) * sizeof(char));  //allocate memory to each internal pointer, just enough for each string
    strcpy(wordList[i], buffer);
}

//display
for(int i=0; i<MAX; i++){
    printf("%s ", wordList[i]);
}

//Ask user to delete one of the words
int pos=0;
printf("Enter index of word to delete: ");
int check = scanf("%d", &pos);
if(pos >=0 && pos <=(MAX-1)){
    free(wordList[pos]); //a dangling pointer
    wordList[pos]= NULL;
}
//Since now some pointers might be NULL, we need to ALWAYS check for NULL before using the pointer
for(int i=0; i<MAX; i++){
    if(wordList[i]){ //if the current pointer is not null
        printf("%s ", wordList[i]);
    }
}

//even when freeing, you have to be careful
for(int i=0; i<MAX; i++){
    if (wordList[i]){
        free(wordList[i]);
    } 
}
free(wordList);
}