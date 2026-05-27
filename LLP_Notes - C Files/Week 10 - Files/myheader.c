#include <stdio.h>

struct person
{
    int personid;
    char name[20];
    char surname[20];
};

// In the source code, we implement the functions that were declared in the header file. This source file will include the header file to access the structure definition and function prototypes.

void displayPerson(struct person p)
{
    printf("PersonId: %d \n", p.personid);
    printf("Name: %s \n", p.name);
    printf("Surname: %s \n", p.surname);
}

struct person fillPerson()
{
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