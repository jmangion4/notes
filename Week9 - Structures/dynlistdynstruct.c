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

    //declare a dynamic list of 3 dynamic person records
    //this is the most memory effecient of all collections because it uses up the least amount of memory
    //it also allows us to delete records within the list, and freeing memory

    //Step 1 - declare your dynamic collection and allocate memory for the pointers
    struct person** listptr = (struct person**)malloc(MAX * sizeof(struct person*));

    //Step 2 - REMEMEBER to allocate memory for the person record for each pointer
    for(int i=0; i< MAX; i++){
        listptr[i] = (struct person*)malloc(sizeof(struct person));
    }
    
    /* test how to fill in the first record
        listptr[0] is a pointer in the first cell ,
        dereferencing this pointer will allow us to access the mem block for the person record  *listptr[0]
        to acces the personid in that record   *listptr[0].personid  BUT remember the problem of order of precedence of operators
        so the correct code is (*listptr[0]).personid
        otherwise, you can use the struct operator ->  using this code  listptr[0]->personid

    */
    listptr[0]->personid = 100;  ///  or  (*listptr[0]).personid = 100
    strcpy(listptr[0]->name, "Gigi");
    strcpy(listptr[0]->surname, "Gatt");

    //Step 3 - fill in the data for each person record using the functions
    for(int i=0; i<MAX; i++){
        *listptr[i] = fillPerson();  //get a record returned by fillperson() and attach it to the current pointer
    }

    //Step 4 - display
    printf("Displaying data\n");
      for(int i=0; i<MAX; i++){
        displayPerson(*listptr[i]);
    }

    //Delete the first person record
    free(listptr[0]);
    listptr[0] = NULL;

    //since we have deleted, we always need to check for null before using the pointer
    printf("Displaying data after delete\n");
    for(int i=0; i<MAX; i++){
        if(listptr[i]){  //if the current pointer is not null
            displayPerson(*listptr[i]);
        }
    }

    //Step 5 - release mem for each malloc you called
    for(int i=0; i< MAX; i++){
        if(listptr[i]){ //if the current pointer is not null
            free(listptr[i]);
        }
    }
    free(listptr);

}