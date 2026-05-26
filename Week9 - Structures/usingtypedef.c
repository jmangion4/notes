#include <stdio.h>
#include <string.h>
#define MAX 3

//USE TYPEDEF to Define a new struct type to store details about a person and call it personRec
// typedef is used to rename types to make the code shorter or more readable
typedef struct person {
    int personid;
    char name[20];
    char surname[20];
} personRec;

//Declare a function which fills in a struct person at runtime and returns it
personRec fillPerson(){
    personRec p;
    printf("Enter details for one person \n");
    printf("PersonId: ");
    int check = scanf("%d", &p.personid);
    printf("Name: ");
    scanf("%s", p.name);
    printf("Surname: ");
    scanf("%s", p.surname);
    return p;
}

void displayPerson(personRec p){
    printf("PersonId: %d \n", p.personid);
    printf("Name: %s \n", p.name);
    printf("Surname: %s \n", p.surname);
}

int main(void){
    struct person p1; //you can still refer to the old type but not recommended
    personRec p2  = {
        100,
        "Toni",
        "Borg"
    }; 
    displayPerson(p2);
}
