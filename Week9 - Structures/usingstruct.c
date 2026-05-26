#include <stdio.h>
#include <string.h>

// Define a new struct type to store details about a person
struct person {
    int personid;
    char name[20];
    char surname[20];
};

int main(void)
{
    // declare a varible of
    struct person p;

    // Fill in the details
    p.personid = 100;
    strcpy(p.name, "Toni"); // p.name = "Toni" --> will not work
    strcpy(p.surname, "Vella");

    // Display
    printf("PersonId: %d\n", p.personid);
    printf("Name: %s\n", p.name);
    printf("Surname: %s\n", p.surname);

    // declare another variable of type struct person and initialize
    struct person p2 = {
        200,
        "Anna",
        "Borg"
    };
    printf("The size of a struct person is %d bytes\n", sizeof(struct person));


}
