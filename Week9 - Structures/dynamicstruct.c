#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Define a new struct type to store details about a person
struct person {
    int personid;
    char name[20];
    char surname[20];
};


int main(void){

    //declare a static person record
    struct person p;  //p is a static record stored on stack taking up 44 bytes

    //declare a DYNAMIC person record using malloc()
    int* ptr = (int*)malloc(sizeof(int));
    struct person* personPtr = (struct person*)malloc(sizeof(struct person));

    //How do we access the personid field in the record to which the pointer personPtr is pointing?
    // Remember that if the pointer personPtr is pointing to a record, that record is *personPtr
    // So the personid field should be *personPtr.personid
    // HOWEVER here we have a big problem because the dot operator has a HIGHER precedence than *
    // and the compiler till interpret the code as   * (personPtr.personid) which does not make sense
    // Therefore we need to use brackets, so that first we deference the pointer then we access the field
    //     correct code:    (*personPtr).personid

    //Fill up the details in the record to which the pointer is pointing
     (*personPtr).personid = 100;
     strcpy((*personPtr).name, "Toni");
     strcpy((*personPtr).surname, "Vella");

      //display
    printf("PersonId: %d \n", (*personPtr).personid);
    printf("Name: %s \n", (*personPtr).name);
    printf("Surname: %s \n", (*personPtr).surname);

    //To avoid using the brackets we can use a special operator to handle pointers to struct  pointer->field
    printf("PersonId: %d \n", personPtr->personid);
    printf("Name: %s \n", personPtr->name);
    printf("Surname: %s \n", personPtr->surname);  //using the struct operator ->


    free(personPtr); //always free!!
}