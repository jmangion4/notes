#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 3

//Define a new struct type to store details about a person
struct person {
    int personid;
    char name[20];
    char surname[20];
};

//Declare a function which fills in a struct person at runtime and returns it
struct person fillPerson(){
   struct person p;
    printf("Enter details for one person \n");
    printf("PersonId: ");
    int check = scanf("%d", &p.personid);
    printf("Name: ");
    scanf("%s", p.name);
    printf("Surname: ");
    scanf("%s", p.surname);
    return p;
}

void displayPerson(struct person p){
    printf("PersonId: %d \n", p.personid);
    printf("Name: %s \n", p.name);
    printf("Surname: %s \n", p.surname);
}

int main(void){

    //declare a dynamic collection of 3 person records on heap

    // int* ptr = (int*) malloc(MAX * sizeof(int));  use the int declaration as a template to remember syntax
    struct person* listptr = (struct person*)malloc(MAX * sizeof(struct person));

    //fill up each person record one by one
    for(int i=0; i<MAX; i++){
        listptr[i] = fillPerson();
    }

    for(int i=0; i<MAX; i++){
        displayPerson(listptr[i]);
    }

    //add space for 2 more person records
    int newsize = (MAX + 2);
    listptr = (struct person*)realloc(listptr, newsize * sizeof(struct person)); 
    //fill in the data for last two records
    free(listptr);



}