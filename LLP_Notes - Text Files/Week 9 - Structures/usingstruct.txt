#include <stdio.h>
#include <string.h>

//Define a new struct type to store details about a person
struct person {
    int personid;
    char name[20];
    char surname[20];
};


int main(void){
//declare a variable of type struct person
    struct person p;

//Fill in details for one person
    p.personid = 100;
    strcpy(p.name, "Toni");
    strcpy(p.surname, "Vella");

    //display
    printf("PersonId: %d \n", p.personid);
    printf("Name: %s \n", p.name);
    printf("Surname: %s \n", p.surname);

    //declare another variable of type struct person and initialise
    struct person p2 = {
        200,
        "Anna",
        "Borg"
    };
    printf("The size of a struct person is %d bytes.", sizeof(struct person));
}