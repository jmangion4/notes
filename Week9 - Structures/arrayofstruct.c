#include <stdio.h>
#include <string.h>
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

//Declare a fuction which accepts a struct person and displays it

int main(void){
    //declare an array to store 3 persons
    
    struct person personList[MAX];

    //code to test functions
    //struct person p1 = fillPerson();
    //displayPerson(p1);
    
    //fill in the array of persons
    for(int i=0; i < MAX; i++){
        printf("Fill data for person %d\n", i);
        personList[i]= fillPerson(); //fill in each person record
    }

    //display all
    for(int i=0; i < MAX; i++){
        displayPerson(personList[i]);
    }
}
